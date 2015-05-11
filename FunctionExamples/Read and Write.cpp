# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <vector>
# include <stdlib.h>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// MODIFY THIS SO IT SPLITS CHROMOSOMES IN HALF AT CENTROMERE AND PASSES REFERENCES TO FUNCTIONS TO IMPROVE EFFICIENCY
// ALSO MODIFY MOST OF MAIN SO IT IS A FUNCTION THAT IS CALLED, TOO MUCH JUNK IN MAIN NOW!!!
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct overlap
{
  string IID[30000];
  int PHE[30000];// Phenotype data
  string CHR[30000];// Chromosome number
  int BP1[30000];// base position at start of run
  int BP2[30000];// base position at end of run
};

// declare function that outputs the size in basepairs from start of first run to end of last run on entire chromosome
int howbig(overlap& data, int counter)
{  
 int max=data.BP2[0];  
 for (int i=0;i<counter;i++) 
    { 
      if (data.BP2[i]>max) 
        { 
          max=data.BP2[i]; 
        } 
    } 
 return max;
}

// declare function that reads in rows and returns case row indeces
vector<int> caseruncounter(overlap& data,int counter)
{ 
vector <int> caseindex(1,0);// where PHE is 1
    for (int i=0;i<counter;i++)// create scan of each row in data
    {
      if(data.PHE[i]==1)
	{
	  caseindex.push_back(i);// create a list of case rows
	}
    }
    return caseindex;
}

// declare function that reads in rows and returns control row indeces
vector<int> controlruncounter(overlap& data,int counter)
{
vector <int> controlindex(1,0);// where PHE is 1
    for (int i=0;i<counter;i++)// create scan of each row in data
    {
      if(data.PHE[i]==2)
	{
	  controlindex.push_back(i);// create a list of control rows
	}
    }
    return controlindex;
}

// declare function that fills Chrom vector for each base pair on chromosome
vector<int> datafill(overlap& data,int counter,int size)
{ 
  vector<int> Chrom(size,0);
  for (int j=0;j<counter;j++)
	{
	  for (int i=data.BP1[j];i<data.BP2[j];i++)// start filling Chrom vector at base position start in run and stop at last
	    {
	      Chrom.at(i)=Chrom.at(i)+1;// add 1 to each position for every time a run overlaps that region
	    }
	}
 ofstream writer("runs.dat", ios::app);
  for (int i=0;i<Chrom.size();i++)
    {
      writer<<Chrom[i]<<endl;
    }
  writer.close();
}

// declare function that returns how many input files there are:
int countinput()
{
 system("ls *rows.dat | wc -l > inputs.dat"); // unix commands to write how many input files there are to inputs.dat
 string numin;
 int numcount;
 ifstream reader;// NOTE: this must be declared on a seperate line before reader.open
 getline(reader,numin);
 stringstream stream;
 stream<<numin;
 stream>>numcount;
 stream.clear();
 return numcount;
}

//declare function that reads and returns in number of rows in input file
int countrows()
{
 // Now read in the row count file
string filename2="rows.dat";//number of rows in data to be read in 
ifstream reader;// NOTE: this must be declared on a seperate line before reader.open
reader.open(filename2.c_str()); //generate reader which allows variable "filename" to be used as name
if (!reader)//setup error message for read problem 
    { 
      cout<<"Error opening file"<<endl; 
      return -1; 
    }
 string rows;// number of rows that will be read in with string format
 int rowcount;// number of rows that will be read in as int
 getline(reader,rows);
 stringstream stream;
 stream<<rows;
 stream>>rowcount;
 stream.clear();
 return rowcount;
}

// write function that reads in data;
int readindata(vector <string> temp)
{
  int numinput = countinput(); // asssign number of input files to variable
    if (numinput<2)
      {
stringstream stream;// generate string to numeric converter    
ifstream reader;// NOTE: this must be declared on a seperate line before reader.open
string filename="CHR01.overlap.input";// All overlap files must be seperated per chromosome and be named in the fromat "CHRXX.overlap.input", such as CHR01.overlap.input or CHR0X.overlap.
reader.open(filename.c_str()); //generate reader which allows variable "filename" to be used as name
if (!reader)//setup error message for read problem 
    { 
      cout<<"Error opening file"<<endl; 
      return -1; 
    }
 int counter;//generate counter to record number of elements in file 
 for (int i=0;!reader.eof();i++)
   {
     string tempa=temp[i];// generate temp storage object for each line of file
     string *tempaptr;
     tempaptr=&tempa;
     string filler=&tempa[i];
     getline(reader,filler);
   }
       }
    else
      {
stringstream stream;// generate string to numeric converter    
ifstream reader;// NOTE: this must be declared on a seperate line before reader.open
string filename="CHR01.overlap.input";// All overlap files must be seperated per chromosome and be named in the fromat "CHRXX.overlap.input", such as CHR01.overlap.input or CHR0X.overlap.
reader.open(filename.c_str()); //generate reader which allows variable "filename" to be used as name
if (!reader)//setup error message for read problem 
    { 
      cout<<"Error opening file"<<endl; 
      return -1; 
    }
 int counter;//generate counter to record number of elements in file 
 for (int i=0;!reader.eof();i++)
   {
     string tempa=temp[i];// generate temp storage object for each line of file
     string *tempaptr;
     tempaptr=&tempa;
     string filler=&tempa[i];
     getline(reader,filler);
   }

       }
}

int main()
{
overlap data;
stringstream stream;// generate string to numeric converter
int totalrowcount=countrows();
vector <string> temp(totalrowcount);

  //Now use R to modify the overlap file into a better format
  //Execute commands

system("R --vanilla < keep_good1.R");// open R and run data cleaning script
system("rm rows.dat*"); // clear rows data files
 int counter=countrows();
 readindata(temp);
 //Assign Individual ID status to proper part of data structure:
 for (int i=0;i<counter;i++)
        {
 	 data.IID[i]=temp[i].substr(0,temp[i].find_first_of(" "));
 	 temp[i].erase(0,temp[i].find_first_of(" "));
        }
 //Assign case/control status to proper part of data structure:
 for (int i=0;i<counter;i++)
        {
 	stream<<temp[i].substr(0,temp[i].find_first_of(" "));
 	stream>>data.PHE[i];
 	stream.clear();
 	temp[i].erase(0,temp[i].find_first_of(" "));
        }

 //Assign chromosome number to proper part of data structure:
 for (int i=0;i<counter;i++)
        {
 	 data.CHR[i]=temp[i].substr(0,temp[i].find_first_of(" "));
 	 temp[i].erase(0,temp[i].find_first_not_of(" ")+data.CHR[i].size());// erase up until space after chromosome number
        }

 //Erase space before BP1 values:
 for (int i=0;i<counter;i++)
        {
 	 temp[i].erase(0,temp[i].find_first_not_of(" "));// erase up until space after chromosome number
        }

 //Assign BP1 of each run to proper part of data structure:
 for (int i=0;i<counter;i++)
        {
 	stream<<temp[i].substr(0,temp[i].find_first_of(" "));
 	stream>>data.BP1[i];
 	stream.clear();
 	temp[i].erase(0,temp[i].find_first_of(" "));
        }

 //Erase space before BP2 values:
 for (int i=0;i<counter;i++)
        {
 	 temp[i].erase(0,temp[i].find_first_not_of(" "));// erase up until space after chromosome number
        }
 //Assign BP2 of each run to proper part of data structure:
 for (int i=0;i<counter;i++)
        {
 	stream<<temp[i].substr(0,temp[i].find_first_of(" "));
 	stream>>data.BP2[i];
 	stream.clear();
 	temp[i].erase(0,temp[i].find_first_of(" "));
        }

//Generate objects to store each pair and count overlap for each position for cases and controls:
 int size=howbig(data,counter);//
 datafill(data,counter,size); // function that writes out data

 vector <int> caseindex(1,0);
 caseindex=caseruncounter(data,counter);

vector <int> controlindex(1,0); controlindex=controlruncounter(data,counter);
 for (int i=1;i<10;i++)
   {
     cout<<data.IID[i]<<"   "<<data.PHE[i]<<"   "<<data.CHR[i]<<"   "<<data.BP1[i]<<"   "<<data.BP2[i]<<endl;
   }
return 0;
}

          
   

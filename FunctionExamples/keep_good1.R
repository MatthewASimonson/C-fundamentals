## Keep good indeces of data to be read into c program
data <- as.matrix(read.table("CHR01.overlap",header=TRUE))
# gets rid of "UNION" and "CON" FID lines
part.d<-which(data[,2]!="UNION")
data <- data[part.d,]
part.e<-which(data[,2]!="CON")
data <- data[part.e,]

# get rid of the .dup extesion on any of the IID
data[,3] <- data[,2]

# get rid of individuals with no phenotype:

keep.index <- which(data[,4]!="-9")
data <- data[keep.index,]
# convert matrix back to data frame
data <- as.data.frame(data)
# write out row of zeros for first row
empty<-as.data.frame(matrix(rep("0",86),1,86))
rows <- nrow(data)
write.table(rows,"rows.dat",quote=FALSE,row.names=FALSE,col.names=FALSE,sep="")
write.table(empty,"CHR01.overlap",quote=FALSE,row.names=FALSE,col.names=FALSE,sep="")

# Write out cleaned data:
write.table(data,"CHR01.overlap",quote=FALSE,row.names=FALSE,col.names=FALSE,append=TRUE)
q('no')




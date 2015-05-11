/*
 * ics_client.cpp
 *
 *  Created on: Mar 5, 2010
 *      Author: genelab
 */

# include "ics.h"

int main()
{
	calculator *ptrcalc= new calculator;
	ptrcalc ->launch();
	while (ptrcalc ->run())
	{
		ptrcalc ->readInput();
		ptrcalc ->writeOutput();
	}
}

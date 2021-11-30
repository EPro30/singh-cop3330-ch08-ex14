/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Riya Singh
 */
 
 //The purpose of this program is to demonstrate why const argument are not useful.
 
#include <iostream>
#include <cmath>

void square(const int n)
{
	n = n*n;
	std::cout << "The square of 2 is is " << n << std::endl;
}

int main()
{
	square(2);
}

/*
The compiler gives the following error
constArgNotWorks.cpp: In function ‘void square(int)’:
constArgNotWorks.cpp:13:4: error: assignment of read-only parameter ‘n’
   13 |  n = n*n;
      |  ~~^~~~~
*/
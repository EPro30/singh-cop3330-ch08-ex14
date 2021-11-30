/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Riya Singh
 */
 
 //The purpose of this program is to calculate area of a circle to demonstrate the use of const argument.
 
#include <iostream>
#include <cmath>

void calculateArea(const double pi, double r)
{
	double result = pi*(pow(2.0, 2));
	std::cout << "The Area of a circle with radius 2.0 m is " << result << std::endl;
}

int main()
{
	calculateArea(3.141592653589793238, 2.0);
}
// Quadratic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cassert>

int main()
{
	double a, b, c, x1, x2, discriminant;
	std::cout << "Enter a number for A "; std::cin >> a;
	std::cout << "Enter a number for B "; std::cin >> b;
	std::cout << "Enter a number for C "; std::cin >> c;
	std::cout << "\n" << std::endl;
	discriminant = b * b - 4 * a*c;
	
	assert (discriminant > 0);
	x1 = (-b + sqrt(discriminant)) / (2 * a);
	x2 = (-b - sqrt(discriminant)) / (2 * a);
	std::cout << "x1 = " << x1 << std::endl;
	std::cout << "x2 = " << x2 << std::endl;

		return 0;
}


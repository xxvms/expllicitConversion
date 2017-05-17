// expllicitConversion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class Distance
{
	const double Meeters2Feet; 
	int feet;
	double inches;
public:
	Distance() : feet(0), inches(0.0), Meeters2Feet(3.280833) // NO argument constructor
	{}
	explicit Distance(double meters) : Meeters2Feet(3.280833)
	{
		double feet_ = Meeters2Feet * meters;
		feet = int(feet_);
		inches = 12 * (feet_ - feet);
	}
	void showDist()			// display distance
	{
		std::cout << feet << "\' - " << inches << "\"";
	}
};


int main()
{
	double meters = 3.0;

	void fancyDistance(Distance);	//declaration
	Distance dist1(2.35); // uses 1 Arg constructor to convert meters to Distance
	

	//Distance dist1 = 2.35; // ERROR if constructor is explicit!!!
	std::cout << "\ndist1 = ";
	dist1.showDist();
	std::cout << std::endl;

	//std::cout << "\ndist1 = "; 
	//fancyDistance(meters); // ERROR if constructor is explicit!!!

	system("pause");
    return 0;
}
void fancyDress(Distance dist)
{
	std::cout << "(in feet and inches) = ";
	dist.showDist();
	std::cout << std::endl;
}


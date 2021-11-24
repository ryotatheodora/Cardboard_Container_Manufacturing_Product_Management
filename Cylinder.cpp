#include "Cylinder.h"

using namespace std;

Cylinder::Cylinder()
{
	diameter = 0;
	length = 0;
	setUnits("");
}

Cylinder::Cylinder(double diameter, double length, string units)
{
	this->diameter = diameter;
	this->length = length;
	setUnits(units);
}

double Cylinder::getVolume() const
{
	 return ((0.5 * 3.14 * (0.5 * diameter) * (0.5 * diameter)) * length);
}

string Cylinder::toString() const
{
   string str = "Cylinder: diameter = " + to_string(diameter) + " ft, length = " + to_string(length) + " ft";
   return str;
}

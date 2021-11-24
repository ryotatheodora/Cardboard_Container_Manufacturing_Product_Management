#include "Box.h"
#include <iostream>

using namespace std;

Box::Box()
{
	width = 0;
	depth = 0;
	height = 0;
	setUnits("");
}

Box::Box(double width, double depth, double height, std::string units)
{
    this->width = width;
    this->depth = depth;
    this->height = height;
	setUnits(units);
}

double Box::getVolume() const
{
	return width * depth * height;
}

string Box::toString() const
{
    string str = "Box: width = " + to_string(width) + " ft, depth = " +
        to_string(depth) + " ft, height = " +
        to_string(height) + " ft";
    return str;
}


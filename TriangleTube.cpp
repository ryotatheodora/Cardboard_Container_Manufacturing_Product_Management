#include <iostream>
#include "TriangleTube.h"

using namespace std;

TriangleTube::TriangleTube() 
{
    side = 0;
    length = 0;
    setUnits("");
}

TriangleTube::TriangleTube(double side, double length, std::string units)
{
    this->side = side;
    this->length = length;
    setUnits(units);
}

double TriangleTube::getVolume() const
{
    double volume = (0.5 * side * length);
    return volume;
}


std::string TriangleTube::toString() const
{
    string str = "Triangle Tube: side = " + to_string(side) +
        " ft, length = " + to_string(length) + " ft";
    return str;
}

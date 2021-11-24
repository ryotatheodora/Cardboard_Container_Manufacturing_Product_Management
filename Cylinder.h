#ifndef _CYLINDER_
#define _CYLINDER_

#include "Container.h"
#include <string>

class Cylinder : virtual public Container
{
private:
	double diameter;
	double length;
public:
	Cylinder();
	Cylinder(double diameter, double length, std::string units);
	double getVolume() const override;
	std::string toString() const override;
};
#endif

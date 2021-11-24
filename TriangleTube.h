#ifndef _TRIANGLETUBE_
#define _TRIANGLETUBE_

#include "Container.h"
#include <string>

class TriangleTube : virtual public Container
{
private: 
	double side;
	double length;
public:
	TriangleTube();  
	TriangleTube(double side, double length, std::string units);
	double getVolume() const override;
	std::string toString() const override;
};
#endif

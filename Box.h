#ifndef _BOX_
#define _BOX_

#include "Container.h"
#include <string>

class Box : virtual public Container
{
private:
	double width;
	double depth;
	double height;
public:
	Box();
	Box(double width, double depth, double height, std::string units);
	double getVolume() const override;
	std::string toString() const override;
};
#endif

#ifndef _CONTAINER_
#define _CONTAINER_

#include <iostream>
#include <string>
#include <vector>

class Container
{
friend std::ostream& operator<<(std::ostream& output, const Container& c);

private:
	std::string units;
public:
	virtual double getVolume() const = 0;
	virtual std::string toString() const = 0;
	std::string getUnits() const;
	void setUnits(std::string units);
	virtual~Container() {};
	bool operator== (const Container& c) const;
	bool operator< (const Container& c) const;
};
#endif

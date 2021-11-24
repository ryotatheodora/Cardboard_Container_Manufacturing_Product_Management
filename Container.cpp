#include "Container.h"
#include <iostream>

using namespace std;

string Container::getUnits() const
{
    return units;
}

void Container::setUnits(std::string units)
{
    this->units = units;
}

bool Container::operator==(const Container& c) const
{
        return this->toString() == c.toString();
}

bool Container::operator<(const Container& c) const
{
        return this->getVolume() < c.getVolume();
}

std::ostream& operator<<(std::ostream& output, const Container& c) 
{
        output << c.toString();
        return output;
}

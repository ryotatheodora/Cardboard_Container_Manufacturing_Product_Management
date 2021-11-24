#include "Container.h"
#include "Box.h"
#include "Cylinder.h"
#include "TriangleTube.h"

#include <memory>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	vector<unique_ptr<Container>> list;
	Container* tTube1 = new TriangleTube(2, 3, "ft");
	list.push_back(unique_ptr<Container>(tTube1));
	Container* cylinder1 = new Cylinder(4, 3, "ft");
	list.push_back(unique_ptr<Container>(cylinder1));
	Container* box1 = new Box(2, 3, 4, "ft");
	list.push_back(unique_ptr<Container>(box1));
	Container* tTube2 = new TriangleTube(4, 4, "ft");
	list.push_back(unique_ptr<Container>(tTube2));
	for (int i = 0; i < list.size(); i++) cout << i+1 <<". Volume (" << list.at(i)->toString() 
    << ") = " << list.at(i)->getVolume() << " cu. ft." <<  endl;
}

#ifndef GLOP_BUILDING
#define GLOP_BUILDING

#include "globals.h"
#include "polygon3d.h"
#include <math.h>
#include <vector>
#include <time.h>

class Building{
public:
	Point center;

	std::vector<Polygon3d> model;
	std::vector<Polygon3d> box;

	static const double sidewalkWidth;
	static const double maxBuildingWidth;
	static const double distanceBetweenBuildings;
	static const double streetWidth; // distanceBetweenBuildings - maxBuildingWidth;

	unsigned int listName; // used for on GPU rendering

	Building(Point center);
	void draw();
	void draw_CPU();
	void update();
	std::vector<Polygon3d> boundingBox();
};

#endif

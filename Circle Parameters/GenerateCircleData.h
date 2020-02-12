#ifndef GenerateCircleData_h
#define GenerateCircleData_h

#include "Vec.h"

void generateCircleData(std::vector<Vec*>& points, const Vec& center, float radius, int resolution){
    // Clearing the points vector to make sure it's empty before I start
    points.clear();

	double x, y;
	double dTheta = (2 * 3.14159265) / resolution;
	float offsetX, offsetY;
	offsetX = center.getX();
	offsetY = center.getY();

	for (int i = 0; i < resolution; i++) {
		points[i] = new Vec();

		x = (radius * cos(dTheta) + offsetX);
		y = (radius * sin(dTheta) + offsetY);
		points[i]->setX(x);
		points[i]->setY(y);

		dTheta += dTheta;
	}

}

#endif

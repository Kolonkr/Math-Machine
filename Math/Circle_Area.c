#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

double Circle_Area(float r) {
	double area = pow(r, 2) * M_PI;
	return area;
}
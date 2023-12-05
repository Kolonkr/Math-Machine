#include "function.h"
#include <math.h>

float Triangle_Hypotenuse(float a, float b) {
	float c = pow(pow(a, 2) + pow(b, 2), 0.5);
	return c;
}
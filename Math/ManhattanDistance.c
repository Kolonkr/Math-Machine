#include "function.h"
#define _USE_MATH_DEFINES
#include <math.h>

double toRadians(float degree) {
	return degree * (M_PI / 180.0); //M_PI / 180.0 == 0.017453292519943295
}

double ManhattanDistance(float lat1, float lon1, float lat2, float lon2) {
	const int R = 6371; //지구 반지름(km)
	double dLat = fabsf(toRadians(lat2 - lat1));
	double dLon = fabsf(toRadians(lon2 - lon1));

	double distance = dLat + dLon;
	double distanceKm = R * distance;

	return distanceKm;
}
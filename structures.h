#include "libs.h"

struct Point
{
public:
	int x = 0, y = 0;
	Point(float u_x, float u_y)
	{
		x = u_x;
		y = u_y;
	}
	static double distanceFunc(const Point& p1, const Point& p2)
	{
		int distance = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
		return distance;
	}
};
#include "structures.h"

int main()
{
	Point point1(1, 2), point2(4, 6);
	int result = Point::distanceFunc(point1, point2);
	cout << "Distance between point equals to " << result << endl;
	return 0;
}
#include "structures.h"

int main()
{
	Rect rect(5, 10);
	rect.printRect();
	rect.resizeRect(10, 10);
	rect.printRect();
	rect.relocateRect(5, 5);
	rect.printRect();
	return 0;
}
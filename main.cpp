#include "structures.h"

int main()
{
	Car car1;
	car1.setValues(5.453, 0.146, 0, 577, 126.4, 3400, "gray", "automatic", "2024", "Rolls-Royce", "Spectre");
	car1.printFunc();
	return 0;
}
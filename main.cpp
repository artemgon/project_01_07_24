#include "structures.h"

int main()
{
	Fraction f1(5, 10), f2(10, 100);
	cout << "Sum of fractions: ";
	Fraction::addFunc(f1, f2).print();
	cout << "Difference of fractions: ";
	Fraction::subFunc(f1, f2).print();
	cout << "Product of fractions: ";
	Fraction::multiplyFunc(f1, f2).print();
	cout << "Sum of fractions: ";
	Fraction::divideFunc(f1, f2).print();
	return 0;
}
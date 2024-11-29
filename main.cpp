#include "structures.h"

int main()
{
	ComplexNumber c_n_1(3, 4), c_n_2(1, 2);
	cout << "Sum: ";
	ComplexNumber::addFunc(c_n_1, c_n_2).printFunc();
	cout << "Difference: ";
	ComplexNumber::subFunc(c_n_1, c_n_2).printFunc();
	cout << "Product: ";
	ComplexNumber::multiplyFunc(c_n_1, c_n_2).printFunc();
	cout << "Quotient: ";
	ComplexNumber::divideFunc(c_n_1, c_n_2).printFunc();
	return 0;
}
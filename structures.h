#include "libs.h"

struct ComplexNumber
{
	float re, im;
	ComplexNumber(float r_p, float i_p) : re(r_p), im(i_p) {}
	ComplexNumber static addFunc(const ComplexNumber& c_n_1, const ComplexNumber& c_n_2)
	{
		return ComplexNumber(c_n_1.re + c_n_2.re, c_n_1.im + c_n_2.im);
	}
	ComplexNumber static subFunc(const ComplexNumber& c_n_1, const ComplexNumber& c_n_2)
	{
		return ComplexNumber(c_n_1.re - c_n_2.re, c_n_1.im - c_n_2.im);
	}
	ComplexNumber static multiplyFunc(const ComplexNumber& c_n_1, const ComplexNumber& c_n_2) {
		return ComplexNumber((c_n_1.re * c_n_2.re) - (c_n_1.im * c_n_2.im), (c_n_1.re * c_n_2.im) + (c_n_1.im * c_n_2.re));
	}
	ComplexNumber static divideFunc(const ComplexNumber& c_n_1, const ComplexNumber& c_n_2) {
		float denominator = c_n_2.re * c_n_2.re + c_n_2.im * c_n_2.im; 
		return ComplexNumber((c_n_1.re * c_n_2.re + c_n_1.im * c_n_2.im) / denominator,
		(c_n_1.im * c_n_2.re - c_n_1.re * c_n_2.im) / denominator);
	}
	void printFunc() const
	{
		cout << re << " + " << im << " * i" << endl;
	}
};
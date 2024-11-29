#include "libs.h"

int gcd(int a, int b)
{
	while (b) 
	{ 
		a %= b;
		swap(a, b);
	}
	return a;
}

struct Fraction
{
public:
	int numerator, denominator;
	Fraction(int num, int denom) : numerator(num), denominator(denom)
	{
		if (denom == 0) { 
			cout << "Error"; 
			exit(1); 
		}
		reduce();
	}
	void reduce()
	{
		int g = gcd(abs(numerator), abs(denominator));
		numerator /= g;
		denominator /= g;
		if (denominator < 0)
		{
			numerator = -numerator;
			denominator = -denominator;
		}
	}
	Fraction static addFunc(const Fraction& f1, const Fraction& f2)
	{
		return Fraction(f1.numerator * f2.denominator + 
		f2.numerator * f1.denominator, f1.denominator * 
		f2.denominator);
	}

	Fraction static subFunc(const Fraction& f1, const Fraction& f2)
	{
		return Fraction(f1.numerator * f2.denominator - 
		f2.numerator * f1.denominator,
		f1.denominator * f2.denominator);
	}

	Fraction static multiplyFunc(const Fraction& f1, const Fraction& f2) {
		return Fraction(f1.numerator * f2.numerator,
			f1.denominator * f2.denominator);
	}

	Fraction static divideFunc(const Fraction& f1, const Fraction& f2) {
		return Fraction(f1.numerator * f2.denominator,
			f1.denominator * f2.numerator);
	}

	void MixedFraction() const
	{
		int wholePart = numerator / denominator;
		int remainder = abs(numerator) % denominator;
		if (remainder) cout << wholePart << " " << remainder << "/" << denominator << endl;
		else cout << wholePart << endl;
	}
	void print() const 
	{ 
		cout << numerator << "/" << denominator << endl;
	}
};
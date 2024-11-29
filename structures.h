#include "libs.h"

struct Car
{
public:
	float length, clearance, volume, power, diameter,weight;
	string color, transmission, year, brand, model;
	void setValues(float l, float c, float v, float p, float d, float w,
		string col, string t, string y, string b, string m)
	{
		length = l; 
		clearance = c; 
		volume = v;
		power = p;
		diameter = d;
		weight = w;
		color = col;
		transmission = t;
		year = y;
		brand = b;
		model = m;
	}
	void printFunc() const {
		cout << "Brand: " << brand << endl;
		cout << "Model: " << model << endl;
		cout << "Year: " << year << endl;
		cout << "Weight: " << weight << " kg" << endl;
		cout << "Length: " << length << " m" << endl;
		cout << "Clearance: " << clearance << " m" << endl;
		cout << "Engine Volume: " << volume << " L" << endl;
		cout << "Engine Power: " << power << " HP" << endl;
		cout << "Wheel Diameter: " << diameter << " inches" << endl;
		cout << "Color: " << color << endl;
		cout << "Transmission: " << transmission << endl;
	}
};
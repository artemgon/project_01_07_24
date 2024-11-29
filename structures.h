#include "libs.h"

struct Rect
{
public:
	float width, length;
    int y = 0;
    int x = 0; 
	Rect(float w, float l)
	{
		width = w;
		length = l;
	}
	void printRect()
	{
        for (int i = 0; i < y; i++)
        {
            cout << endl;
        }
        for (int j = 0; j < x; j++)
            cout << " "; 
        for (int j = 0; j < width; j++)
        {
            cout << "-";
        }
        cout << endl;
        for (int i = 1; i < length - 1; i++)
        {
            for (int j = 0; j < x; j++)
                cout << " "; 
            cout << "|";
            for (int j = 1; j < width - 1; j++)
            {
                cout << " "; 
            }
            cout << "|" << endl;
        }
        for (int j = 0; j < x; j++)
            cout << " "; 
        for (int j = 0; j < width; j++)
        {
            cout << "-";
        }
        cout << endl;
	}
    void resizeRect(float w1, float l1)
    {
        if (w1 > 0 && l1 > 0)
        {
            width = w1;
            length = l1;
        }
        else
            cout << " Error..." << endl;
    }
    void relocateRect(int y1, int x1)
    {
        y = y1; 
        x = x1;
    }
};
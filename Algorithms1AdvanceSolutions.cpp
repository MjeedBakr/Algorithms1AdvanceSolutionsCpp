#include <iostream>
#include <string>
using namespace std;

float readRadious()
{
	float r;

	cout << "Please enter radious R: ";
	cin >> r;

	return r;
}

float calcCircleArea(float r)
{
	const float PI = 3.141592653589793238;

	float area = PI * pow(r, 2);
	return area;
}

void printArea(float area)
{
	cout << "Circle Area = " << area << endl;
}

int main()
{
	printArea(calcCircleArea(readRadious()));
}

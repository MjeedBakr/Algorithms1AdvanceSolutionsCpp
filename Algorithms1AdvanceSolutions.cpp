#include <iostream>
#include <string>
using namespace std;

float readCircumference()
{
	float d;

	cout << "Please enter Circumference d: ";
	cin >> d;

	return d;
}

float calcCircleAreaByCircumference(float d)
{
	const float PI = 3.141592653589793238;

	float area = pow(d, 2) / (PI * 4);
	return area;
}

void printArea(float area)
{
	cout << "Circle Area = " << area << endl;
}

int main()
{
	printArea(calcCircleAreaByCircumference(readCircumference()));
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

void readTriangleData(float& a, float& b, float& c)
{
	cout << "Please enter triangle side A: ";
	cin >> a;
	cout << "Please enter triangle Base B: ";
	cin >> b;
	cout << "Please enter triangle side C: ";
	cin >> c;
}

float circleAreaByATriangle(float a, float b, float c)
{
	const float PI = 3.141592653589793238;
	float P = (a + b + c) / 2;

	float T;
	T = (a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c)));


	float area = PI * pow(T, 2);
	return area;
}

void printArea(float area)
{
	cout << "Circle Area = " << area << endl;
}

int main()
{
	float a, b, c;
	readTriangleData(a, b, c);
	printArea(circleAreaByATriangle(a, b, c));

	return 0;
}

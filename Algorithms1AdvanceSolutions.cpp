#include <iostream>
#include <string>
using namespace std;

void readTriangleData(float& a, float& b)
{
	cout << "Please enter triangle side A: ";
	cin >> a;
	cout << "Please enter triangle Base B: ";
	cin >> b;
}

float circleAreaByITriangle(float a, float b)
{
	const float PI = 3.141592653589793238;

	float area = PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
	return area;
}

void printArea(float area)
{
	cout << "Circle Area = " << area << endl;
}

int main()
{
	float a, b;
	readTriangleData(a, b);
	printArea(circleAreaByITriangle(a, b));

	return 0;
}

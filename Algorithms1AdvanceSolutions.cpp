#include <iostream>
#include <string>
using namespace std;

float readSquareSide()
{
	float d;

	cout << "Please enter square side d: ";
	cin >> d;

	return d;
}

float calcCircleAreaInscribedInSquare(float d)
{
	const float PI = 3.141592653589793238;

	float area = (pow(d, 2) * PI) / 4;
	return area;
}

void printArea(float area)
{
	cout << "Circle Area Inscribed in square = " << area << endl;
}

int main()
{
	printArea(calcCircleAreaInscribedInSquare(readSquareSide()));
	return 0;
}

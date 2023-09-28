#include <iostream>

using namespace std;

void readNumbers(float &s, float &d)
{
	cout << "Enter rectangle side S: ";
	cin >> s;
	cout << "Enter rectangle diagonal D: ";
	cin >> d;
}

float calcRectangleAreaBySideAndDiagonal(float side, float diagonal)
{
	float area = side * sqrt(pow(d, 2) - pow(a, 2));
	return area;
}

void printNumbers(float area)
{
	cout << "Rectangle Area = " << area << endl;
}

int main()
{
	float num1, num2;
	readNumbers(num1, num2);
	printNumbers(calcRectangleAreaBySideAndDiagonal(num1, num2));

}

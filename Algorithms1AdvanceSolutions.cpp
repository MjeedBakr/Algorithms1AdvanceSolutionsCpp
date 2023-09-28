#include <iostream>

using namespace std;

void readNumbers(float &w, float &l)
{
	cout << "Enter rectangle width: ";
	cin >> w;
	cout << "Enter rectangle length: ";
	cin >> l;
}

float calcRectangleArea(float width, float length)
{
	return width * length;
}

void printNumbers(float area)
{
	cout << "Rectangle Area = " << area << endl;
}

int main()
{
	float num1, num2;
	readNumbers(num1, num2);
	printNumbers(calcRectangleArea(num1, num2));

}

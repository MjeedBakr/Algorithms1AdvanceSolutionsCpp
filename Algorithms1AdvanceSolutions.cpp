#include <iostream>

using namespace std;

void readNumbers(float &a, float &h)
{
	cout << "Enter triangle base a: ";
	cin >> a;
	cout << "Enter triangle height h: ";
	cin >> h;
}

float calcTrangleArea(float base, float height)
{
	float area = (base/2) * height;
	return area;
}

void printNumbers(float area)
{
	cout << "Triangle Area = " << area << endl;
}

int main()
{
	float num1, num2;
	readNumbers(num1, num2);
	printNumbers(calcTrangleArea(num1, num2));

}

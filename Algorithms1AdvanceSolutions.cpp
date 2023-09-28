#include <iostream>

using namespace std;

void readNumbers(int& num1, int& num2)
{
	cout << "Enter your first number: ";
	cin >> num1;
	cout << "Enter your second number: ";
	cin >> num2;
}

void swapNumbers(int& A, int& B)
{
	int temp = A;
	A = B;
	B = temp;
}

void printNumbers(int num1, int num2)
{
	cout << "The number 1 is: " << num1 << endl;
	cout << "The number 2 is: " << num2 << endl;
}

int main()
{
	int num1, num2;
	readNumbers(num1, num2);
	cout << "Before swapping: \n";
	printNumbers(num1, num2);
	swapNumbers(num1, num2);

	cout << "After swapping: \n";
	printNumbers(num1, num2);

}

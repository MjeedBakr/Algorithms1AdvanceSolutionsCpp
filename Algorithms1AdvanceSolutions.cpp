#include <iostream>
#include <string>
using namespace std;

float readPositiveNumber(string message)
{
	float number = 0;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number <= 0);

	return number;
}

float totalBillAfterServiceAndTax(float totalBill)
{
	totalBill = totalBill * 1.1;  //calculate service
	totalBill = totalBill * 1.16; //add the tax value

	return totalBill;
}

int main()
{
	float totalBill = readPositiveNumber("Please enter the total bill: ");

	cout << endl;
	cout << "Total Bill = " << totalBill << endl;
	cout << "Total Bill after service fee and sales tax = "
		<< totalBillAfterServiceAndTax(totalBill) << endl;



	return 0;
}

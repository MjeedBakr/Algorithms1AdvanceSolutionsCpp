#include <iostream>
#include <string>
using namespace std;

int readTotalSales()
{
	int totalSales;

	cout << "Please enter a total sales: ";
	cin >> totalSales;

	return totalSales;
}

float getComissionPercentage(float totalSales)
{
	if (totalSales >= 1000000)
		return 0.01;
	else if (totalSales >= 500000)
		return 0.02;
	else if (totalSales >= 100000)
		return 0.03;
	else if (totalSales >= 50000)
		return 0.05;
	else
		return 0.00;
}

float calcTotalComission(float totalSales)
{
	return getComissionPercentage(totalSales) * totalSales;
}




int main()
{
	float totalSales = readTotalSales();

	cout << "Commission Percentage = " << getComissionPercentage(totalSales);
	cout << "\nTotal Comission = " << calcTotalComission(totalSales);

	return 0;
}

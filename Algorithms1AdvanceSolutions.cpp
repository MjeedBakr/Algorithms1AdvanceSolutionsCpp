#include <iostream>
#include <string>
using namespace std;

string readPinCode()
{
	string pinCode;
	cout << "Please enter your PIN code\n";
	cin >> pinCode;

	return pinCode;
}

bool login()
{
	string pinCode;
	do
	{
		pinCode = readPinCode();

		if (pinCode == "1234")
			return 1;
		else
		{
			cout << "\nWrong PIN code\n";
			system("color 4f");
		}
	} while (pinCode != "1234");

	return 0;
}

int main()
{
	if (login())
	{
		system("color 2F");
		cout << "\nYour account balance = " << 7500 << endl;
	};

	return 0;
}

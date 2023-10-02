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
	short validationCounter = 3;
	do
	{
		validationCounter--;
		pinCode = readPinCode();

		if (pinCode == "1234")
			return 1;
		else
		{
			cout << "\nWrong PIN code, you have " << validationCounter << " more tries\n";
			system("color 4f");
		}
	} while (pinCode != "1234" && validationCounter >= 1);

	return 0;
}

int main()
{
	if (login())
	{
		system("color 2F");
		cout << "Your account balance = " << 7500 << endl;
	}
	else
		cout << "\nYour card is blocked call the bank for support" << endl;

	return 0;
}

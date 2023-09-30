#include <iostream>
#include <string>
using namespace std;

int readNumberInRange(int from, int to)
{
	int grade;
	do
	{
		cout << "Please enter your grade between 0 and 100: \n";
		cin >> grade;
	} while (grade < from || grade > to);

	return grade;
}

char getGradeLetter(int grade)
{
	if (grade >= 90)
		return 'A';
	else if (grade >= 80)
		return 'B';
	else if (grade >= 70)
		return 'C';
	else if (grade >= 60)
		return 'D';
	else
		return 'F';
}





int main()
{
	cout << "Result = " << getGradeLetter(readNumberInRange(0, 100));
	return 0;
}

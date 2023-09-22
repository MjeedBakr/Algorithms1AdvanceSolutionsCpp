#include <iostream>
#include <string>

using namespace std;

string readName()
{
    string name;

    cout << "Please Enter your name: \n";
    getline(cin, name);

    return name;
}

void printName(string name)
{
    cout << "Your name is: " << name << endl;
}

int main()
{
    printName(readName());
}

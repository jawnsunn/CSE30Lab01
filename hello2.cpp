#include <iostream>
using namespace std;
int main()
{
	string name;
	cout << "Please enter you name: ";
	//cin >> name;
	getline (cin, name);
	cout << "Welcome to CSE30, " << name << ".\n";
	return 0;
}


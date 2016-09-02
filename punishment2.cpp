#include <iostream>
using namespace std;
int main()
{
	int line_num;
	int typo_num;
	cout << "Enter how many lines you want: "; 
	cin >> line_num;
	cout << "Enter the line you want the typo in: ";
	cin >> typo_num;
	if (line_num < 1)
		{ 
		cout << "This is an incorrect number of sentences." << endl;
	} else if (typo_num < 1) {
		cout << "This is an incorrect number of typos." << endl;
	} else {
	for (int n = 1; n <  line_num; n++) {
		if (n == typo_num) {
			cout <<  "I will always use object oriented programing" << ".\n";
				}
		cout << "I will always use object oriented programming!" << "\n";
			} 
		}
	return 0;
}

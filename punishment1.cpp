#include <iostream>
using namespace std;
int main()
{
	int line_num;
	cout << "Enter how many lines you want: "; 
	cin >> line_num;
	if (line_num < 1)
	{
	cout << "This is an incorrect number of sentences." << endl;
	} else {
	for (int n = 0; n < line_num; n++) {
		cout << "I will always use object oriented programming!" << "\n";
			} 
		}
	return 0;
}

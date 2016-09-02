#include <iostream>
using namespace std;
int main()
{
	int line_num;
	int typo_num;
	cout << "Enter how many lines you want: ";  //This asks for how many sentences you want the program to write.
	cin >> line_num;
	cout << "Enter the line you want the typo in: "; /*This asks which line you want to the typo to be in
							i.e:
							Enter how many lines you want: 5
							Enter the line you want the typo in: 3
							I will always use object oriented programming!
							...
							[at third line] I will always use object oriented programing! <- typo here
							I will always use object oriented programming!
							*/
	cin >> typo_num
	if (line_num < 1) //if number of lines requested is less than 1, then abort
		{ 
		cout << "This is an incorrect number of sentences." << endl;
	} else if (typo_num < 1) {  //if user got past the num_line check, then they go through the typo_num check. Same as before
		cout << "This is an incorrect number of typos." << endl;
	} else { //if both checks go through, then do the requested loop
	for (int n = 1; n <  line_num; n++) {
		if (n == typo_num) { //do the requested typo also
			//cout <<  "I will always use object oriented programing" << ".\n";
			cout <<  "DICKS OUT FOR HARAMBE TBH" << "\n";
				}
		cout << "I will always use object oriented programming!" << "\n";
			} 
		}
	return 0;
}

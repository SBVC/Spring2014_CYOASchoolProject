/*
Choose Your Own Adventure
School Project CS110-70 Spring 2014
By Nathaniel Orimlade, Zachary Hebert, and Juan Rameriez?
*/

#include <iostream>

using namespace std;

int main(){
	system("PAUSE");

	cout << "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" << endl << endl;
	cout << "1. bbbb\n2. ccccccc\n3. dddddd\n4. eeeeeeee\n5. Quit";

	int userChoice;
	cin >> userChoice;

	switch (userChoice){
	case 1:
		entryB();
		break;
	case 2:
		entryC();
		break;
	case 3:
		entryD();
		break;
	case 4:
		entryE();
		break;
	case 5:
		break;
	default:
		cout << "Recongnized inputs: 1, 2, 3, 4, 5.\n";
	}

	return 0;
}
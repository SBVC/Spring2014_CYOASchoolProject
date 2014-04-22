/*
Choose Your Own Adventure
School Project CS110-70 Spring 2014
By Nathaniel Orimlade, Zachary Hebert, and Juan Rameriez?
*/

#include <iostream>

using namespace std;

int entryA();
int entryB();
int entryC();
int entryD();
int entryE();

int main(){
	entryA();
	cout << "Welcome to Choose Your Own Adventure... Choose wisely...you could be killed at any moment" << endl << endl;
	cout << "Press a to begin...or any letter really, whichever letter is your favorite, just pick one...come on...any day now\n";
	cout << "1. a\n2. b\n3. c\n4. d";
	cout << "Press 0 to quit though...just saying...you don't HAVE to play...seriously if you don't want to...don't\n";

	int userChoice;
	cin >> userChoice;
	switch (userChoice)
		case 0: break;
	system("PAUSE");
	return 0;
}

int entryA(){
	cout << "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" << endl << endl;
	cout << "1. bbbb\n2. ccccccc\n3. dddddd\n4. eeeeeeee\n5. Quit\n";

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

int entryB(){
	return 0;
}

int entryC(){
	return 0;
}

int entryD(){
	return 0;
}

int entryE(){
	return 0;
}
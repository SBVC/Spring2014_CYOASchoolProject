/*
Choose Your Own Adventure
School Project CS110-70 Spring 2014
By Nathaniel Orimlade, Zachary Hebert, and Juan Rameriez
*/

#include <iostream>

using namespace std;

//function prototypes
int entryA();
int entryB();
int entryC();
int entryD();
int entryE();

//global variables
int userChoice;

int main(){
	cout << "Welcome to Choose Your Own Adventure... Choose wisely...you could be killed at any moment" << endl << endl;
	cout << "Enter 1 to begin...or any number really*, whichever number is your favorite, just pick one...come on...any day now" << endl << endl;
	cout << "*Enter 0 to quit though**...just saying...you don't HAVE to play...seriously if you don't want to...don't" << endl << endl;
	cout << "**If you mess up and enter a letter, you loose." << endl << endl;

	cin >> userChoice;

	switch (userChoice){
		case 0:
			break;
		default:
			entryA();
	}

	return 0;
}

int entryA(){
	cout << "\naaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" << endl << endl;
	cout << "1. bbbb\n2. ccccccc\n3. dddddd\n4. eeeeeeee\n0. Quit" << endl << endl;

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
	case 0:
		break;
	default:
		cout << "Recongnized inputs: '1', '2', '3', '4', '0'." << endl << endl;
		entryA();
	}

	return 0;
}

int entryB(){
	cout << "\nbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb" << endl << endl;
	system("pause");

	return 0;
}

int entryC(){
	cout << "\nccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc" << endl << endl;
	system("pause");

	return 0;
}

int entryD(){
	cout << "\ndddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd" << endl << endl;
	system("pause");

	return 0;
}

int entryE(){
	cout << "\neeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee" << endl << endl;
	system("pause");

	return 0;
}
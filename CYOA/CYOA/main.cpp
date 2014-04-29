/*
Choose Your Own Adventure
School Project CS110-70 Spring 2014
By Nathaniel Orimlade, Zachary Hebert, and Juan Rameriez
*/

#include <iostream>
#include <string>

using namespace std;

//function prototypes
int entryA();
int entryB();
int entryC();
int entryD();
int entryE();

//global variables
int userChoice;

//classes
class entry{
	string text = "\0";
	unsigned int numChoices = 0;
	string choice[5] = { "\0", "\0", "\0", "\0", "\0", };

public:
	//gets
	string get_text(){
		return text;
	}

	int get_numChoices(){
		return numChoices;
	}

	string get_choice(int num){
		return choice[num];
	}

	//sets
	int set_text(string newText){
		if (newText == "")
			text = "/0";
		else
			text = newText;
		
		return 0;
	}

	int set_numChoices(unsigned int newNum){
		numChoices = newNum;

		return 0;
	}

	int set_choice(int num, string newText){
		if (newText == "")
			choice[num] = "\0";
		else
			choice[num] = newText;

		return 0;
	}
};

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
	//system("pause"); -for debugging

	return 0;
}

int entryC(){
	cout << "\nccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc" << endl << endl;
	//system("pause"); -for debugging

	return 0;
}

int entryD(){
	cout << "\ndddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd" << endl << endl;
	//system("pause"); -for debugging

	return 0;
}

int entryE(){
	cout << "\neeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee" << endl << endl;
	//system("pause"); -for debugging

	return 0;
}
/*
Luke Hage, Logan Smith
Three_Digit_Ascending_Descending_Selection
Display ascending, descending or neither based on user's 3-digit number
Edited by Jeremy Allen
*/

//Libraries
#include <iostream>
#include <conio.h>

//Namespace
using namespace std;

//Functions

void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

//MAIN
void main() {
	int i = 0;
	for (;i <= 30; i++) {
	int x;
	cout << "Input 3 digit positive integer. . ." << endl; //Asks the user to input a 3 digit number
	cin >> x;
	int a = (x / 100); // finds the first number
	int b = (x % 100) / 10; // finds the second number
	int c = (x % 10); // finds the third number
	if (a < b && b < c) {
		cout << "Your digits are in ascending order from left to right." << endl;
	}
	else if (a > b && b > c) {
		cout << "Your digits are in descending order from left to right." << endl;
	}
	else {
		cout << "Your digits are neither ascending or descending." << endl;
	}
}
	pause(); //pauses to see the displayed text
	
	}

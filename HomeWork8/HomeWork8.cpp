//Kunal Lanjewar
//HomeWork8.cpp
//CSCI 123, Fullerton College

#include <iostream>
using namespace std;

void LastFirstMiddle(char firstname[]);	//function prototypes

int main()	//main start
{
	char firstname[15];		// char array with to hold 15 characters
	char response = ' ';

	cout << "Please enter your First name: ";	// get data from user
	cin >> firstname;							// into the char array

	LastFirstMiddle(firstname); // function declaration

	return 0;
}			// end main

void LastFirstMiddle(char firstname[])
{
	char middlename[15];
	char lastname[15];
	char fullname[30];

	cout << "\nPlease enter your Middle name: ";
	cin >> middlename;

	cout << "\nPlease enter your Last name: ";
	cin >> lastname;

	strcpy_s(fullname, lastname); // copies data from lastname to fullname array
	strcat_s(fullname, ", "); // appends fullname with a , & space
	strcat_s(fullname, firstname); // appends first name to contain data from firstname array
	strcat_s(fullname, " "); // appends fullname with a space
	strcat_s(fullname, middlename); // appends middle to contain the data from middlename array

	cout << "\n\tYour full name is " << fullname << endl << endl;
	cout << "\tThe total number of characters in your Full name is: ";
	cout << strlen(fullname) - 3 << endl << endl; // gets total num of chars contained in the fullname array, minus the 2 spaces & ,
}


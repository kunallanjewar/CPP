//Kunal Lanjewar
//HomeWork 11
//StudentMain.cpp

#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

void main()
{
	cout << "The first student example: \n";
	CStudent aStudent;
	cout << "The default student information: \n";
	cout<<aStudent;
	cout << "\n\nGet new student information: \n" << endl;
	cin>>aStudent;
	cout << "\nNew student information: \n";
	cout<<aStudent;
	cout << "\n\nSet new id to 0010";
	aStudent.setId("0010");
	cout << "\nThe new id: " << aStudent.getId();
	cout << "\nThe updated student information: ";
	cout<<aStudent;
	cout << endl << endl;

	cout << "The second student example: \n";
	CStudent anotherStudent("0011", "John", "Doe", 'K', 'M', 30, 3.50);
	cout << "The initial student information: \n";
	cout<<anotherStudent;
	cout << "\n\nThe current GPA: " << anotherStudent.getGPA();
	cout << "\n\nSet new GPA to 3.80";
	anotherStudent.setGPA(3.80);
	cout << "\nThe updated student information: \n";
	cout<<anotherStudent;
	cout << endl;

	system("PAUSE");
}
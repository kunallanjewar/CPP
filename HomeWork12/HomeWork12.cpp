//Kunal lanjewar
//HomeWork 12
//HomeWork12.cpp

#include <iostream>
#include "Course.h"
using namespace std;

void main()
{
	CCourse defaultCourse;
	cout << "Information of the default course: \n" << defaultCourse;
	CCourse math101("MA101", "Arithmetic Math", "3");
	cout << "Information of the course Math101: \n" << math101;
	CCourse csci123("C0123", "Introduction To Programming", "4");
	cout << "Current ID of the course Computer Science 123: \n" << csci123.getID() << endl;
	csci123.setId("CS123");
	csci123.title = "Introduction To Programming with C++";
	cout << "Updated information of the course Computer Science 123: \n" << csci123 << endl;
	system("Pause");
}


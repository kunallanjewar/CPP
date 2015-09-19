//Kunal Lanjewar
//Project 4
//Project 4.cpp

#include <iostream>
#include "Course.h"
#include "Student.h"
using namespace std;
void main()
{
	CCourse defaultCourse;
	cout << "Information of the default course: \n" << defaultCourse;
	CCourse math101("MA101", "Arithemetic Math", 3);
	cout << "Information of the course Math101: \n" << math101;
	CCourse csci123("CS123", "Introduction To Programming", 4);
	cout << "Current ID of the course Computer Science 123: \n" << csci123.getID() << endl;
	csci123.setId("CS123");
	csci123.title = "Introduction To Programming with C++";
	cout << "Updated information of the course Computer Science 123: \n" << csci123 << endl;
	CStudent defaultStudent;
	cout << "Information of the default student: \n" << defaultStudent;
	CStudent firstStudent("S0000", "Camry", "Toyota", 'S', 'M', 3.50);
	cout << "\nInformation of the first student: \n" << firstStudent;
	cout << "\nChange the ID of the first student to S0001. \n";
	firstStudent.setId("S0001");
	cout << "Update the GPA of the first student to 3.65. \n";
	firstStudent.setGPA(3.65);
	cout << "\nThe new ID of the first student is: " << firstStudent.getId() << endl;
	cout << "\nThe new GPA of the first student is: " << firstStudent.getGPA() << endl;
	cout << "\nEnroll Math 101 for the first student.";
	/*firstStudent.addCourse(math101);
	cout << "\nEnroll CSCI123 for the first student.";
	firstStudent.addCourse(csci123);
	cout << "\nUpdated information of the first student: \n" << firstStudent;
	cout << "\nDrop Math 101 for the first student.";
	firstStudent.dropCourse(math101);
	cout << "\nLast information of the first student: \n" << firstStudent;*/

	system("Pause");
}
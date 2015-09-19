//Kunal Lanjewar
//Project 4
//Student.cpp

#include "Student.h"
#include <iostream>
using namespace std;

CStudent::CStudent()	//constructor variables
{
	Id = "0000";
	FirstName = "First";
	LastName = "Last";
	Gender = 'U';
	MiddleInitial = 'I';
	GPA = 0.00;
	TotalUnits = 0;
}
CStudent::CStudent(string ID, string LName, string FName, char MInitial, char Gen, /*int TUnits*/ double Gpa)
{
	Id = ID;
	FirstName = FName;
	LastName = LName;
	Gender = Gen;
	MiddleInitial = MInitial;
	GPA = Gpa;
	//TotalUnits = TUnits;
	TotalUnits = 0;
}
CStudent::CStudent(const CStudent& aStudent)
{
	Id = aStudent.Id;
	FirstName = aStudent.FirstName;
	LastName = aStudent.LastName;
	Gender = aStudent.Gender;
	MiddleInitial = aStudent.MiddleInitial;
	GPA = aStudent.GPA;
	TotalUnits = aStudent.TotalUnits;
}
CStudent::~CStudent()
{}

string const CStudent::getFirstName()
{
	return FirstName;
}
string const CStudent::getLastName()
{
	return LastName;
}
char const CStudent::getMiddleInitial()
{
	return MiddleInitial;
}
char const CStudent::getGender()
{
	return Gender;
}
string const CStudent::getId()
{
	return Id;
}
double const CStudent::getGPA()
{
	return GPA;
}
int const CStudent::getTotalUnits()
{
	return TotalUnits;
}

void CStudent::setFirstName(string FName)
{
	FirstName = FName;
}
void CStudent::setLastName(string LName)
{
	LastName = LName;
}
void CStudent::setMiddleInitial(char MInitial)
{
	MiddleInitial = MInitial;
}
void CStudent::setGender(char Gen)
{
	Gender = Gen;
}
void CStudent::setGPA(double Gpa)
{
	GPA = Gpa;
}
void CStudent::setId(string ID)
{
	Id = ID;
}
void CStudent::setTotalUnits(int TUnits)
{
	TotalUnits = TUnits;
}
/*void CStudent::input()
{
cout << "Please enter the information for your student..." << endl;
cout << "First Name: ";
cin >> FirstName;
cout << "Last Name: ";
cin >> LastName;
cout << "Middle Initial: ";
cin >> MiddleInitial;
cout << "Gender: ";
cin >> Gender;
cout << "Number of Units completed: ";
cin >> TotalUnits;
cout << "GPA: ";
cin >> GPA;
}
void CStudent::output()
{
cout << "[" << Id << "]" << " <" << LastName << "," << " " << FirstName << " " << MiddleInitial << ">	" << Gender << "	" << TotalUnits << "	" << "<" << GPA << ">";
}*/

istream& operator>>(istream& ins, CStudent& astudent)
{

	ins >> astudent.FirstName;
	ins >> astudent.LastName;
	ins >> astudent.MiddleInitial;
	ins >> astudent.Gender;
	ins >> astudent.TotalUnits;
	ins >> astudent.GPA;
	ins >> astudent.Id;

	return ins;
}
ostream& operator<<(ostream& outs, const CStudent& astudent)
{
	outs << "[" << astudent.Id << "] " << astudent.FirstName << " " << astudent.MiddleInitial << " " << astudent.LastName << endl;
	outs << "Gender: " << astudent.Gender << endl;
	outs << "GPA: " << astudent.GPA << endl;
	outs << "Current enrolled units: " << astudent.TotalUnits << endl;

	return outs;
}
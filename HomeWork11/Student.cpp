//Kunal Lanjewar
//HomeWork 11
//Student.cpp

#include "Student.h"
#include <iostream>
using namespace std;

CStudent::CStudent()	//constructor variable
{
	Id = "0000";
	FirstName = "First";
	LastName = "Last";
	Gender = 'U';
	MiddleInitial = 'I';
	GPA = 0.0;
	TotalUnits = 0;
}
CStudent::CStudent(string ID, string LName, string FName, char MInitial, char Gen, int TUnits, double Gpa)
{
	Id = ID;
	FirstName = FName;
	LastName = LName;
	Gender = Gen;
	MiddleInitial = MInitial;
	GPA = Gpa;
	TotalUnits = TUnits;
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
istream& operator>>(istream& ins, CStudent& student)
{
	cout << "Please enter the information for your student..." << endl;
	cout << "First Name: ";
	ins >> student.FirstName;
	cout << "Last Name: ";
	ins >> student.LastName;
	cout << "Middle Initial: ";
	ins >> student.MiddleInitial;
	cout << "Gender: ";
	ins >> student.Gender;
	cout << "Number of Units completed: ";
	ins >> student.TotalUnits;
	cout << "GPA: ";
	ins >> student.GPA;
	return ins;
}
ostream& operator<<(ostream& outs, const CStudent& student)
{
	outs << "[" << student.Id << "]" << " <" << student.LastName << "," << " " << student.FirstName << " " << student.MiddleInitial << ">	" << student.Gender << "	" << student.TotalUnits << "	" << "<" << student.GPA << ">";
	return outs;
}


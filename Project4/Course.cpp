//Kunal lanjewar
//Project 4
//Course.cpp

#include "Course.h"
#include <string>
using namespace std;

CCourse::CCourse()
{
	Id = "C0000";
	title = "Unknown";
	currentUnits = 0;

}

CCourse::CCourse(string ID, string Title, int TotalUnits)
{
	Id = ID;
	title = Title;
	currentUnits = TotalUnits;
}

CCourse::~CCourse(void)
{}
void CCourse::setId(string courseID)
{
	courseID = Id;
}
string CCourse::getID()
{
	return Id;
}
istream& operator>>(istream& ins, CCourse& student)
{

	ins >> student.Id;
	ins >> student.title;
	ins >> student.currentUnits;

	return ins;
}
ostream& operator<<(ostream& outs, const CCourse& student)
{
	outs << "(" << student.Id << ")" << "	[" << student.title << "]	" << student.currentUnits << endl;
	return outs;
}

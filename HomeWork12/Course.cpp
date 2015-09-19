//Kunal lanjewar
//HomeWork 12
//Course.cpp

#include "Course.h"
#include <string>
using namespace std;

CCourse::CCourse()
{
	Id = "C0000";
	title = "Unknown";
	totalUnits = '0';
}

CCourse::CCourse(string ID, string Title, string TotalUnits)
{
	Id = ID;
	title = Title;
	totalUnits = TotalUnits;
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
	ins >> student.totalUnits;
	
	return ins;
}
ostream& operator<<(ostream& outs, const CCourse& student)
{
	outs << "(" << student.Id << ")" << "	[" << student.title << "]	" << student.totalUnits << endl;
	return outs;
}

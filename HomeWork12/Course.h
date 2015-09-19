//Kunal lanjewar
//HomeWork 12
//Course.h
#pragma once
#include <string>
#include <iostream>
using namespace std;

class CCourse
{
public:
	CCourse(void);
	CCourse(string ID, string Title, string TotalUnits);
	~CCourse(void);
	void setId(string courseID);
	string getID();
	string title;
	string totalUnits;

	friend istream& operator >> (istream& ins, CCourse& student);
	friend ostream& operator<<(ostream& outs, const CCourse& student);

private:
	string Id;
};



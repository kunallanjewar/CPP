//Kunal lanjewar
//Project 4
//Course.h
#pragma once
#include <string>
#include <iostream>
using namespace std;

class CCourse
{
	//public access
public:
	CCourse(void);
	CCourse(string ID, string Title, int TotalUnits);
	~CCourse(void);

	//accessor
	void setId(string courseID);

	//mutator
	string getID();

	//Variables
	string title;
	int currentUnits;
	string CrEnCources[5];
	
	//extraction & insertion operators
	friend istream& operator >> (istream& ins, CCourse& student);
	friend ostream& operator<<(ostream& outs, const CCourse& student);

	//No public access
private:
	string Id;
};
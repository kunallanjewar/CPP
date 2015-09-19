//Kunal Lanjewar
//Student.h

#pragma once
#include<string>
using namespace std;

class CStudent
{
	//Public access
public:
	CStudent();
	CStudent(string ID, string LName, string FName, char MInitial, char Gen, int TUnits, double Gpa);
	CStudent(const CStudent& aStudent);
	~CStudent(void);

	void input();
	void output();

	// accessors
	const string getLastName();
	const string getFirstName();
	const char getMiddleInitial();
	const char getGender();
	const int getTotalUnits();
	const string getId();
	const double getGPA();

	//mutators
	void setLastName(string LName);
	void setFirstName(string FName);
	void setMiddleInitial(char MInitial);
	void setGender(char Gen);
	void setTotalUnits(int TUnits);
	void setId(string Id);
	void setGPA(double GPA);

	string FirstName;
	string LastName;
	char MiddleInitial;
	char Gender;
	int TotalUnits;


	//No public access
private:
	double GPA;
    string Id;

};


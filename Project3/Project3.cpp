//Kunal Lanjewar
//Project3.cpp
//Date: 04/05/2014

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int menu();
void listAllStudents();
void listStudentsWithLastName();
void listStudentsWithGPA();
void listStudentsWithTUC();
void listMaleStudents();
void listFemaleStudents();

void main()
{
	int choice;
	do
	{
		system("CLS");
		choice = menu();
		system("CLS");
		switch (choice)
		{
		case 1:
			listAllStudents();
			break;
		case 2:
			listStudentsWithLastName();
			break;
		case 3:
			listStudentsWithGPA();
			break;
		case 4:
			listStudentsWithTUC();
			break;
		case 5:
			listMaleStudents();
			break;
		case 6:
			listFemaleStudents();
			break;
		case 7:
			cout << "Good-bye." << endl;
			break;
		default:
			cout << "Please pick the right choice." << endl << endl;
		}
		system("PAUSE");
	} while (choice != 7);
}
int menu()
{
	cout << " MENU " << endl << endl
		<< " 1. List all students." << endl
		<< " 2. List all the students with specific last name." << endl
		<< " 3. List all the students with specific GPA or higher." << endl
		<< " 4. List all the students with specific total units completed or Higher." << endl
		<< " 5. List all the Male Students." << endl
		<< " 6. List all the Female Students." << endl
		<< " 7. Quit." << endl << endl;
	int ch;
	do
	{
		cout << " Please enter your choice: ";
		cin >> ch;
	} while (!(ch > 0 && ch < 8));
	return ch;
}
void listAllStudents()
{
	ifstream inStream;
	inStream.open("Students.txt");
	if (inStream.fail())
	{
		cout << "Can't open the file Student.txt";
		return;
	}
	string id, fName, lName;
	char mInitial, gender;
	int units;
	float gpa;
	cout << "ALL STUDENTS:" << endl << endl;
	while (inStream >> id >> fName >> mInitial >> lName >> gender >> units >> gpa) {
		cout << id << "\t" << fName << "\t" << mInitial << "\t" << lName << "\t" << gender << "\t" << units << "\t" << gpa << endl;
	}
	inStream.close();
}
void listMaleStudents()
{
	ifstream inStream;
	inStream.open("Students.txt");
	if (inStream.fail())
	{
		cout << "Can't open the file Student.txt";
		return;
	}
	char save, fileName[100];
	ofstream outStream;
	cout << "Do you want to save the result in a file? (y/n) ---> ";
	cin >> save;
	if (save == 'y')
	{
		cout << "Please enter the file name: ";
		cin >> fileName;
		outStream.open(fileName);
		if (outStream.fail())
		{
			cout << "Can't open the file " << fileName;
			save = 'n';
		}
	}
	string id, fName, lName;
	char mInitial, gender;
	int units;
	float gpa;
	cout << "ALL MALE STUDENTS:" << endl << endl;
	while (inStream >> id >> fName >> mInitial >> lName >> gender >> units >> gpa)
	{
		if (gender == 'M')
		{
			cout << id << "\t" << fName << "\t" << mInitial << "\t" << lName << "\t" << gender << "\t" << units << "\t" << gpa << endl;
			if (save = 'y')
				outStream << id << "\t" << fName << "\t" << mInitial << "\t" << lName << "\t" << gender << "\t" << units << "\t" << gpa << endl;
		}
	}
	inStream.close();
}
void listFemaleStudents()
{
	ifstream inStream;
	inStream.open("Students.txt");
	if (inStream.fail())
	{
		cout << "Can't open the file Student.txt";
		return;
	}
	char save, fileName[100];
	ofstream outStream;
	cout << "Do you want to save the result in a file? (y/n) ---> ";
	cin >> save;
	if (save == 'y')
	{
		cout << "Please enter the file name: ";
		cin >> fileName;
		outStream.open(fileName);
		if (outStream.fail())
		{
			cout << "Can't open the file " << fileName;
			save = 'n';
		}
	}
	string id, fName, lName;
	char mInitial, gender;
	int units;
	float gpa;
	cout << "ALL FEMALE STUDENTS:" << endl << endl;
	while (inStream >> id >> fName >> mInitial >> lName >> gender >> units >> gpa)
	{
		if (gender == 'F')
		{
			cout << id << "\t" << fName << "\t" << mInitial << "\t" << lName << "\t" << gender << "\t" << units << "\t" << gpa << endl;
			if (save = 'y')
				outStream << id << "\t" << fName << "\t" << mInitial << "\t" << lName << "\t" << gender << "\t" << units << "\t" << gpa << endl;
		}
	}
	inStream.close();
}
void listStudentsWithLastName()
{
	ifstream inStream;
	inStream.open("Students.txt");
	if (inStream.fail())
	{
		cout << "Can't open the file Student.txt";
		return;
	}
	string targetLastName;
	cout << "Please enter the last name: ";
	cin >> targetLastName;
	char save, fileName[100];
	ofstream outStream;
	cout << "Do you want to save the result in a file? (y/n) ---> ";
	cin >> save;
	if (save == 'y')
	{
		cout << "Please enter the file name: ";
		cin >> fileName;
		outStream.open(fileName);
		if (outStream.fail())
		{
			cout << "Can't open the file " << fileName;
			save = 'n' || 'N';
		}
	}
	string id, fName, lName;
	char mInitial, gender;
	int units;
	float gpa;
	cout << "\nALL STUDENTS with LAST NAME " << targetLastName << ":" << endl << endl;
	while (inStream >> id >> fName >> mInitial >> lName >> gender >> units >> gpa)
	{
		if (lName == targetLastName)
		{
			cout << id << "\t" << fName << "\t" << mInitial << "\t" << lName << "\t" << gender << "\t" << units << "\t" << gpa << endl;
			if (save = 'y')
				outStream << id << "\t" << fName << "\t" << mInitial << "\t" << lName << "\t" << gender << "\t" << units << "\t" << gpa << endl;
		}
	}
	inStream.close();
	outStream.close();
}

void listStudentsWithGPA()
{
	ifstream inStream;
	inStream.open("Students.txt");
	if (inStream.fail())
	{
		cout << "Can't open the file Student.txt";
		return;
	}
	float targetGPA;
	cout << "Please enter GPA: ";
	cin >> targetGPA;
	char save, fileName[100];
	ofstream outStream;
	cout << "Do you want to save the result in a file? (y/n) ---> ";
	cin >> save;
	if (save == 'y')
	{
		cout << "Please enter the file name: ";
		cin >> fileName;
		outStream.open(fileName);
		if (outStream.fail())
		{
			cout << "Can't open the file " << fileName;
			save = 'n';
		}
	}
	string id, fName, lName;
	char mInitial, gender;
	int units;
	float gpa;
	cout << "\nALL STUDENTS with GPA " << targetGPA << " or better:" << endl << endl;
	while (inStream >> id >> fName >> mInitial >> lName >> gender >> units >> gpa)
	{
		if (gpa == targetGPA || gpa > targetGPA)
		{
			cout << id << "\t" << fName << "\t" << mInitial << "\t" << lName << "\t" << gender << "\t" << units << "\t" << gpa << endl;
			if (save = 'y')
				outStream << id << "\t" << fName << "\t" << mInitial << "\t" << lName << "\t" << gender << "\t" << units << "\t" << gpa << endl;
		}
	}
	inStream.close();
	outStream.close();
}
void listStudentsWithTUC()
{
	ifstream inStream;
	inStream.open("Students.txt");
	if (inStream.fail())
	{
		cout << "Can't open the file Student.txt";
		return;
	}
	int targetTUC;
	cout << "Please enter Total Units Completed: ";
	cin >> targetTUC;
	char save, fileName[100];
	ofstream outStream;
	cout << "Do you want to save the result in a file? (y/n) ---> ";
	cin >> save;
	if (save == 'y')
	{
		cout << "Please enter the file name: ";
		cin >> fileName;
		outStream.open(fileName);
		if (outStream.fail())
		{
			cout << "Can't open the file " << fileName;
			save = 'n';
		}
	}
	string id, fName, lName;
	char mInitial, gender;
	int units;
	float gpa;
	cout << "\nALL STUDENTS with units " << targetTUC << " or higher completed:" << endl << endl;
	while (inStream >> id >> fName >> mInitial >> lName >> gender >> units >> gpa)
	{
		if (units == targetTUC || units > targetTUC)
		{
			cout << id << "\t" << fName << "\t" << mInitial << "\t" << lName << "\t" << gender << "\t" << units << "\t" << gpa << endl;
			if (save = 'y')
				outStream << id << "\t" << fName << "\t" << mInitial << "\t" << lName << "\t" << gender << "\t" << units << "\t" << gpa << endl;
		}
	}
	inStream.close();
	outStream.close();
}

enum Gendar
{
	UKNOWN, FEMALE, MALE
};
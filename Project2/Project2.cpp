// Kunal Lanjewar
// Project2.cpp

#include <iostream>
#include <cmath>
using namespace std;
int menu(void);
double inputMetric(void);
void inputEnglish(int & f, double & i);
double convertEtoM(int f, double i);
void convertMoE(int &f, double & i, double m);
void outputEnglish(double m, int f, double i);
void outputMetric(int f, double i, double m);
void EnglishToMetric();
void MetricToEnglish();


int main()
{
	int choice;
	do
	{
		menu();
		cin >> choice;
		if (choice == 1)
		{
			MetricToEnglish();
		}
		else if (choice == 2)
		{
			EnglishToMetric();
		}
		else
		{
			cout << "\nThank you. Have a wonderful day!\n" << endl;
			break;
		}
	} while (choice <= 2);

	return 0;
}

int menu(void)
{
	int choice;
	cout << "\n	Menu \n" << "1.	Convert length from Metric to English \n" << "2.	Convert length from English to Metric \n" << "3.	Quit the Program \n";
	cout << "\nPlease enter your choice: ";

	return 0;
}

void inputMetric(double& m)
{
	cout << "\nEnter a number of meters as a double: ";
	cin >> m;
}

void inputEnglish(int& f, double & i)
{
	cout << "\nEnter feet as an integer: ";
	cin >> f;
	cout << "Enter inches as a double: ";
	cin >> i;
}

double convertEtoM(int f, double i)
{
	double total_inches, m;
	total_inches = (f * 12) + i;
	m = (0.0254*total_inches);
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	return m;
}

void convertMtoE(int& f, double & i, double m)
{
	int temp = 0;
	double temp2;
	temp2 = (3.280839*m);
	temp = static_cast<int>(temp2);
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	i = (temp2 - temp) * 12;
	f = temp;
}

void outputEnglish(double m, int f, double i)
{
	cout << endl;
	cout << m << " meters corresponds to " << f << " feet, " << i << " inches\n";
}

void outputMetric(int f, double i, double m)
{
	cout << endl;
	cout << f << " feet, " << i << " inches corresponds to " << m << " meters\n";
}

void EnglishToMetric()
{
	double m, i;
	int f;

	inputEnglish(f, i);
	m = convertEtoM(f, i);
	outputMetric(f, i, m);
}

void MetricToEnglish()
{
	int f;
	double m;
	double i;

	inputMetric(m);
	convertMtoE(f, i, m);
	outputEnglish(m, f, i);
}






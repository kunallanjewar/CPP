//Kunal Lanjewar
//HomeWork9

#include <iostream>
using namespace std;

int main()
{
	int *p, *q;
	q = new int;
	p = new int;

	*p = 10;
	*q = 12;
	cout << *p << " " << *q << endl;
	*p = *q;
	cout << *p << " " << *q << endl;
	*p = 30;
	cout << *p << " " << *q << endl;
}
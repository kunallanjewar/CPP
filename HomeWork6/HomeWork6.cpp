//Kunal Lanjewar
//HomeWork6.cpp

#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

void outputs(ifstream& in_stream, ofstream& out_stream);

int main()
{
	ifstream fin;
	ofstream fout;

	cout << "Begin editing files.\n";
	fin.open("cad.dat");
	if (fin.fail())
	{
		cout << "Input file opening failed.\n";
		exit(1);
	}

	fout.open("outputs.txt");
	if (fout.fail())
	{
		cout << "Output file opening failed.\n";
		exit(1);
	}

	outputs(fin, fout);
	fin.close();
	fout.close();

	cout << "End of editing files.\n";
	return 0;
}

void outputs(ifstream& in_stream, ofstream& out_stream)
{
	char next;
	in_stream.get(next);
	while (!in_stream.eof())
	{

		if (isspace(next))
			out_stream << '-';
		if (isdigit(next))
			out_stream << '#';
		if (isupper(next))
		{
			next = tolower(next);
			out_stream << next;
		}
		else if (islower(next))
		{
			next = toupper(next);
			out_stream << next;
		}
		else
			out_stream << next;
		in_stream.get(next);
	}
}

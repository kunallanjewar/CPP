//Kunal Lanjewar
//HomeWork7.cpp

#include <iostream>
using namespace std;
const int DECLARED_SIZE = 20;
void fill_array(int a[], int size, int& number_used);
int search(const int a[], int number_used, int target);
int theSmallest(int a[], int size, int& number_used);

int main()
{
	//using namespace std;
	int arr[DECLARED_SIZE], list_size, target;

	fill_array(arr, DECLARED_SIZE, list_size);
	theSmallest(arr, DECLARED_SIZE, list_size);
	
	char ans;
	int result;
	do
	{
		cout << "Enter a number to search for: ";
		cin >> target;

		result = search(arr, list_size, target);
		if (result == -1)
			cout << target << " is not on the list.\n";
		else
			cout << target << " is stored in array position "
			<< result << endl
			<< "(Remember: the first position is 0.)\n";
		cout << "search again?(y/n followed by Return): ";
		cin >> ans;
	} while ((ans != 'n') && (ans != 'N'));
	cout << "End of program.\n";
	return 0;
}

void fill_array(int a[], int size, int& number_used)
{
	//using namespace std;
	cout << "Enter up to " << size << " nonnegative whole numbers.\n"
		<< "Mark the end of the list with a negative numebr.\n";
		int next, index = 0;
	cin >> next;
	while ((next >= 0) && (index < size))
	{
		a[index] = next;
		index++;
		cin >> next;
		number_used = index;
	}

}
int search(const int a[], int number_used, int target)
{
	int index = 0;
	bool found = false;
	while ((!found) && (index < number_used))
		if (target == a[index])
			found = true;
		else index++;

		if (found)
			return index;
		else return -1;

}
int theSmallest(int a[], int size, int& number_used)
{
	int SmallestNumber = -1;

	for (int i = 0; i < a[0]; i++)
	{
		if (SmallestNumber < 0)
			SmallestNumber = a[i];

		if (a[i] >= 0 && a[i] < SmallestNumber)
			SmallestNumber = a[i];
	}

	cout << "Smallest number is " << SmallestNumber << ".\n";
	
	return 0;
}


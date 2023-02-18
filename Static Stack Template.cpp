#include <iostream>
#include <string>
#include "Static Stack Template Class.h"
using namespace std;


int main()
{
	Stack<int> istack(5);
	Stack<double> dstack(5);
	Stack<string> sstack(5);
	Stack<char> cstack(5);

    int values[] = { 5, 10, 15, 20, 25 };
	int value;
	double dvalues[] = { 5.2, 10.4, 15.6, 20.3, 25 };
	double dvalue;
	string svalues[] = { "abc", "def", "ghi", "jkl", "mno" };
	string svalue;
	char cvalues[] = { 'a','b','c','d','e' };
	char cvalue;

	// Pushing and popping integer values in the istack.
	cout << "Integers ";
	cout << "Pushing...\n";
	for (int k = 0; k < 5; k++)
	{
		cout << values[k] << " ";
		istack.push(values[k]);
	}
	cout << "\nPopping...\n";
	while (!istack.isEmpty())
	{
		istack.pop(value);
		cout << value << " ";
	}
	cout << endl;

	// Pushing and popping double values in the dstack.
	cout << "Double ";
	cout << "Pushing...\n";
	for (int k = 0; k < 5; k++)
	{
		cout << dvalues[k] << " ";
		dstack.push(dvalues[k]);
	}
	cout << "\nPopping...\n";
	while (!dstack.isEmpty())
	{
		dstack.pop(dvalue);
		cout << dvalue << " ";
	}
	cout << endl;

	// Pushing and popping string values in the sstack.
	cout << "Strings ";
	cout << "Pushing...\n";
	for (int k = 0; k < 5; k++)
	{
		cout << svalues[k] << " ";
		sstack.push(svalues[k]);
	}
	cout << "\nPopping...\n";
	while (!sstack.isEmpty())
	{
		sstack.pop(svalue);
		cout << svalue << " ";
	}
	cout << endl;

	// Pushing and popping char values in cstack.
	cout << "Characters ";
	cout << "Pushing...\n";
	for (int k = 0; k < 5; k++)
	{
		cout << cvalues[k] << " ";
		cstack.push(cvalues[k]);
	}
	cout << "\nPopping...\n";
	while (!cstack.isEmpty())
	{
		cstack.pop(cvalue);
		cout << cvalue << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}

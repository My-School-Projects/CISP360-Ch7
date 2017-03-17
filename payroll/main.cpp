#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <limits>
using namespace std;

unsigned getUnsigned(string);
double getDouble(string);

int main()
{
	unsigned empID[7] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489 };
	unsigned hours[7];
	double payRate[7];
	double   wages[7];

	for (int i = 0; i < 7; i++)
	{
		stringstream prompt;
		prompt << "Please enter the hours worked by employee " << empID[i] << "\n >> ";
		hours[i] = getUnsigned(prompt.str());
		prompt.str(""); // clear the stream
		prompt << "Please enter the hourly pay rate for employee " << empID[i] << "\n >> ";
		payRate[i] = getDouble(prompt.str());
		prompt.str("");
		wages[i] = hours[i] * payRate[i];
	}
	for (int i = 0; i < 7; i++)
	{
		cout << setprecision(2) << fixed
			 << "Wages for employee " << empID[i] << ": $" << wages[i] << endl;
	}
}

unsigned getUnsigned(string prompt)
{
	unsigned input;
	while (true)
	{
		cout << prompt;
		cin >> input;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else return input;
	}
}

double getDouble(string prompt)
{
	double input = 0;
	while (input < 15)
	{
		cout << prompt;
		cin >> input;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}
	return input;
}

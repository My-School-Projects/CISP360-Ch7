#include <iostream>
#include <random>
#include <string>
#include <limits>
using namespace std;

int getNumber(string);

int main()
{
	int lottery[5];
	int user[5];
	int matches = 0;

	random_device rd;
	default_random_engine rng(rd());
	uniform_int_distribution<> dist(0, 9);

	cout << "Please enter your five lottery numbers" << endl;
	for (int i = 0; i < 5; i++)
	{
		lottery[i] = dist(rng);
		user[i] = getNumber(">> ");
		if (user[i] == lottery[i])
			matches++;
	}
	
	cout << "The winning lottery numbers were:";
	for (int i = 0; i < 5; i++)
	{
		cout << " " << lottery[i];
	}
	cout << endl << "You got: " << matches;
	if (matches == 0)
		cout << " matches.";
	else if (matches == 1)
		cout << " match!";
	else
		cout << " matches!";
	if (matches == 5)
		cout << "You won the grand prize!!!";
	cout << endl;
}

int getNumber(string prompt)
{
	int number = -1;
	while (number < 0 || number > 9)
	{
		cout << prompt;
		cin >> number;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}
	return number;
}

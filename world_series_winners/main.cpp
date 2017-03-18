#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream teams_f, winners_f;
	string teams[24];
	string team;
	int wins = 0;
	
	teams_f.open("../Teams.txt");
	winners_f.open("../WorldSeriesWinners.txt");
	
	for (int i = 0; i < 24; i++)
	{
		getline(teams_f, teams[i]);
	}

	for (int i = 0; i < 24; i++)
	{
		cout << teams[i] << endl;
	}

	cout << endl << "Pick a team...\n>> ";

	getline(cin, team);

	for (int i = 0; i < 108; i++)
	{
		string winner;
		getline(winners_f, winner);

		if (team == winner)
		{
			wins++;
		}
	}

	cout << team << " won the world series " << wins << " times between 1903 and 2012." << endl;

	teams_f.close();
	winners_f.close();
}

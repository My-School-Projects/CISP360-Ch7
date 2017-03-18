#include <iostream>
#include <string>
#include <limits>
#include <sstream>
using namespace std;

typedef float 🍌;
typedef int 🍍;
typedef string 🦄;
typedef stringstream 🐓;

// float getInput(string);
🍌 🌈(🦄);
// string getWeekDay(int);
🦄 🐖(🍍);

int main()
{
    // int monkeys[3][5];
    🍌 🐵[3][5];

    // for (int i = 0; i < 3; i++)
    for (🍍 🍹 = 0; 🍹 < 3; 🍹++)
    {
        // for (int j = 0; j < 5; j++)
        for (🍍 🍸 = 0; 🍸 < 5; 🍸++)
        {
            // I use a stringstream here because I need to insert numbers into a
            // string, and for some reason C++ requires a whole separate class
            // to do that.

            // stringstream prompt;
            🐓 🕊️;

            //                                               i + 1
            🕊️ << "How many pounds of food does monkey " << 🍹 + 1
            //                   getWeekDay(j)
                << " eat on " << 🐖(🍸) << "\n>> ";

            // monkeys[i][j] = getInput(prompt.str());
            🐵[🍹][🍸] = 🌈(🕊️.str());
            // set prompt to "" for next iteration
            🕊️.str("");
        }
    }

    // for (int i = 0; i < 3; i++)
    for (🍍 🍹 = 0; 🍹 < 3; 🍹++)
    {
        // int avg = 0; max = 0; min = monkeys[i][0];
        🍌 🏛️ = 0, ⛲ = 0, 💧 = 🐵[🍹][0];

        // for (int j = 0; j < 5; j++)
        for (🍍 🍸 = 0; 🍸 < 5; 🍸++)
        {
            // avg = monkeys[i][j];
            🏛️ += 🐵[🍹][🍸];
            // if (monkeys[i][j] > max)
            //     max = monkeys[i][j];
            if (🐵[🍹][🍸] > ⛲)
            {
                ⛲ = 🐵[🍹][🍸];
            }
            // if (monkeys[i][j] < min)
            //     min = monkeys[i][j];
            if (🐵[🍹][🍸] < 💧)
            {
                💧 = 🐵[🍹][🍸];
            }
        }
        // avg /= 5;
        🏛️ /= 5;

        cout << "The average amount of food eaten by monkey " << 🍹 + 1
             << " was " << 🏛️ << " lbs." << endl
             << "The least amount of food eaten by monkey " << 🍹 + 1
             << " was " << 💧 << " lbs." << endl
             << "The greatest amount of food eaten by monkey " << 🍹 + 1
             << " was " << ⛲ << " lbs." << endl << endl;
    }
	system("pause");
}

// float getInput(string prompt)
🍌 🌈(🦄 🕊️)
{
    // float input = -1;
    🍌 🐧 = -1;
    // while (input < 0)
    while (🐧 < 0)
    {
        // cout << prompt;
        cout << 🕊️;
        // cin >> input;
        cin >> 🐧;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    // return input;
    return 🐧;
}

🦄 🐖(🍍 🍸)
{
    switch(🍸)
    {
        case 0: return "Monday";
        case 1: return "Tuesday";
        case 2: return "Wednesday";
        case 3: return "Thursday";
        case 4: return "Friday";
        default: return "Doomsday";
    }
}

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char n;
char k;
string f;
int j = 1;
char c;

class games
{
public:
    void game()
    {

        srand(time(0));
        cout << "-----------------------------------------------------------------------------------------------------------------------------------"<<endl;
        cout << "Hi welcome to Computer based Rock Paper Scissor Game:-" << endl
             << "Hope you enjoy!!" << endl
             << "*--------------------*" << endl;
        cout << "If you want to know rules enter \"rule\" through your system else enter \"continue\" to continue" << endl;

        cin >> f;
        if (f == "rule")
        {
            cout << "Enter P for paper" << endl;
            cout << "Enter R for rock" << endl;
            cout << "Enter S for scissor" << endl;
            cout << "*--------------------*" << endl;
            cout << "Let's start the game!" << endl;
        }
        else if (f == "continue")
        {
            cout << "Let's start the game" << endl;
        }
        else
        {
            cout << "Invalid input" << endl;
            return;
        }

        while (j != -1)
        {

            int comp_choice = rand() % 3 + 1;

            if (comp_choice == 1)
            {
                comp_choice = (char)'r';
            }
            else if (comp_choice == 2)
            {
                comp_choice = (char)'p';
            }
            else if (comp_choice == 3)
            {
                comp_choice = (char)'s';
            }

            cout << "Time for Match:" << endl
                 << "Enter your choice" << endl;
            cin >> n;

            if (n >= 65 && n <= 90)
            {
                n = n + 32;
            }

            else if (n != 'r' && n != 'p' && n != 's')
            {
                cout << "Invalid input" << endl;
                return;
            }

            if (comp_choice == n)
            {
                cout << "Computer chose: " << (char)comp_choice << endl;
                cout << "it's a DRAW" << endl;
            }

            if ((comp_choice == 'r' && n == 'p') || (comp_choice == 's' && n == 'r') || (comp_choice == 'p' && n == 's'))
            {
                cout << "Computer chose: " << (char)comp_choice << endl;
                cout << "you won!!!" << endl;
            }
            if ((comp_choice == 'p' && n == 'r') || (comp_choice == 'r' && n == 's') || (comp_choice == 's' && n == 'p'))
            {
                cout << "Computer chose: " << (char)comp_choice << endl;
                cout << "computer won!!" << endl;
            }

            cout << "If you want to playy more match enter 1 else -1 :"<< endl;
            cin >> j;
            if (j == -1)
            {
                cout << "Thanks for playing the game" << endl;
            }
            else if (j != 1)
            {
                cout << "Invalid input" << endl;
                return;
            }
        }
    }
};

int main()
{
    games g;
    g.game();
    return 0;
}

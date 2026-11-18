#include <iostream>
using namespace std;
int s;
int f=1;
int o=3;
class games
{

public:
    void go()
    {

        char arr1[3][3] = {{'_', '_', '_'}, {'_', '_', '_'}, {'_', '_', '_'}};
        cout<<"Enter the no. of round you want to play in game:"<<endl;
        cin>>s; 
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        cout << "Given below is the matrix for the game tic tac toe:-" << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr1[i][j] << " ";
            }
            cout << endl;
        }

        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;

        char n;
        cout << "Choose the the character for player 1:" << endl
             << "1. X" << endl
             << "2. O" << endl;
        cin >> n;

        cout << endl
                << endl;
        if (n == 'X' || n == 'x')
        {
            cout << "Player 1 is X and Player 2 is O" << endl;
        }
        else if (n == 'O' || n == 'o')
        {
            cout << "Player 1 is O and Player 2 is X" << endl;
        }
        else
        {
            cout << "Invalid input" << endl;

            return;
        }
        int i, j;
        cout << endl
             << endl;

             while(s>0){
        // first time
       while (o>0){ cout<<"ROUND:"<<f<<endl;
        cout << "Time for player 1 to choose the position for his character" << endl;
        cout << "Enter the row(i) and column(j) number for your character" << endl;
        cout << "i: ";
        cin >> i;
        cout << "j: ";
        cin >> j;
        if (i > 2 || j > 2)
        {
            return;
        }
        arr1[i][j] = n;

        cout << "Time for player 2 to choose the position for his character" << endl;
        cout << "Enter the row(i) and column(j) number for your character" << endl;
        cout << "i: ";
        cin >> i;
        cout << "j: ";
        cin >> j;

        if (i > 2 || j > 2)
        {
            return;
        }

        arr1[i][j] = (n == 'X' || n == 'x') ? 'O' : 'X';

        cout << "The updated matrix is:-" << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {

                cout << arr1[i][j] << "";
            }
            cout << endl;
        }
    o--;
}

        if ((arr1[0][0] == n && arr1[0][1] == n && arr1[0][2] == n) ||
            (arr1[1][0] == n && arr1[1][1] == n && arr1[1][2] == n) ||
            (arr1[2][0] == n && arr1[2][1] == n && arr1[2][2] == n) ||
            (arr1[0][0] == n && arr1[1][0] == n && arr1[2][0] == n) ||
            (arr1[0][1] == n && arr1[1][1] == n && arr1[2][1] == n) ||
            (arr1[0][2] == n && arr1[1][2] == n && arr1[2][2] == n) ||
            (arr1[0][0] == n && arr1[1][1] == n && arr1[2][2] == n) ||
            (arr1[0][2] == n && arr1[1][1] == n && arr1[2][0] == n))
        {
            cout << " !!!!!CONGRATULATIONS!!!!" << endl
                 << "Player 1 wins!" << endl;
        }
        else if ((arr1[0][0] == (n == 'X' || n == 'x' ? 'O' : 'X') && arr1[0][1] == (n == 'X' || n == 'x' ? 'O' : 'X') && arr1[0][2] == (n == 'X' || n == 'x' ? 'O' : 'X')) ||
                 (arr1[1][0] == (n == 'X' || n == 'x' ? 'O' : 'X') && arr1[1][1] == (n == 'X' || n == 'x' ? 'O' : 'X') && arr1[1][2] == (n == 'X' || n == 'x' ? 'O' : 'X')) ||
                 (arr1[2][0] == (n == 'X' || n == 'x' ? 'O' : 'X') && arr1[2][1] == (n == 'X' || n == 'x' ? 'O' : 'X') && arr1[2][2] == (n == 'X' || n == 'x' ? 'O' : 'X')) ||
                 (arr1[0][0] == (n == 'X' || n == 'x' ? 'O' : 'X') && arr1[1][0] == (n == 'X' || n == 'x' ? 'O' : 'X') && arr1[2][0] == (n == 'X' || n == 'x' ? 'O' : 'X')) ||
                 (arr1[0][1] == (n == 'X' || n == 'x' ? 'O' : 'X') && arr1[1][1] == (n == 'X' || n == 'x' ? 'O' : 'X') && arr1[2][1] == (n == 'X' || n == 'x' ? 'O' : 'X')) ||
                 (arr1[0][2] == (n == 'X' || n == 'x' ? 'O' : 'X') && arr1[1][2] == (n == 'X' || n == 'x' ? 'O' : 'X') && arr1[2][2] == (n == 'X' || n == 'x' ? 'O' : 'X')) ||
                 (arr1[0][0] == (n == 'X' || n == 'x' ? 'O' : 'X') && arr1[1][1] == (n == 'X' || n == 'x' ? 'O' : 'X') && arr1[2][2] == (n == 'X' || n == 'x' ? 'O' : 'X')) ||
                 (arr1[0][2] == (n == 'X' || n == 'x' ? 'O' : 'X') && arr1[1][1] == (n == 'X' || n == 'x' ? 'O' : 'X') && arr1[2][0] == (n == 'X' || n == 'x' ? 'O' : 'X')))
        {
            cout << " !!!!!CONGRATULATIONS!!!!" << endl
                 << "Player 2 wins!" << endl;
        }
        else
        {
            cout << " !!!!!DRAW!!!!" << endl;
        }
    }
    s--;
    f++;
    }



};

int main()
{

    games game;
    game.go();
}

//no. of rounds 
//return


//draw





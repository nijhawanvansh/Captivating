#include <iostream>
using namespace std;

int comp_choice;
int user_choice;

class rock_paper_scissors
{
public:
    void rules()
    {
        cout << "Welcome to Rock, Paper, Scissors!" << endl;
        cout << "Rules: " << endl;
        cout << "Rock beats Scissors" << endl;
        cout << "Scissors beats Paper" << endl;
        cout << "Paper beats Rock" << endl;
        cout << "Enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): " << endl;
    }

    //-----------------------------------------------------------------------------------------------------------------------------//

    void computer_choic()
    {
        int comp_choice = rand() % 3 + 1;
        if (comp_choice == 1)
        {
            cout << "Computer chose Rock" << endl;
        }
        else if (comp_choice == 2)
        {
            cout << "Computer chose Paper" << endl;
        }
        else
        {
            cout << "Computer chose Scissors" << endl;
        }
    };

    //-----------------------------------------------------------------------------------------------------------------------------//

    void user_choic()
    {
        int user_choice;
        cin >> user_choice;
        if (user_choice == 1)
        {
            cout << "You chose Rock" << endl;
        }
        else if (user_choice == 2)
        {
            cout << "You chose Paper" << endl;
        }
        else
        {
            cout << "You chose Scissors" << endl;
        }
    };

    

    //-----------------------------------------------------------------------------------------------------------------------------//

    void game()
    {

        if (comp_choice == user_choice)
        {
            cout << "It's a tie! for this round." << endl;
        }
        else if ((comp_choice == 1 && user_choice == 3) || (comp_choice == 2 && user_choice == 1) || (comp_choice == 3 && user_choice == 2))
        {
            cout << "Computer wins! for this round." << endl;
        }
        else
        {
            cout << "You win! for this round." << endl;
        }
    };
    //-----------------------------------------------------------------------------------------------------------------------------//

    void play_game()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Round " << i + 1 << endl;
            rules();
            computer_choic();
            user_choic();
            game();
        }
    };
};

int main()
{
    rock_paper_scissors game;
    game.play_game();
    return 0;
};
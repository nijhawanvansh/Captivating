#include <iostream>
using namespace std;
int comp_choice;
char n;
string f;
int count;
int j;
class games
{
public:
    void game()
    {
       char r ,p,s,S,P,R;
        srand(time(0));

        int comp_choice = 'rand()%3+1';
        if (comp_choice == 1)
        {
            comp_choice = (r||R);
        }
        else if (comp_choice = 2)
        {
            comp_choice = (p||P);
        }
        else if (comp_choice = 3)
        {
            comp_choice = (s||S);
        }

        cout << "Hi welcome to Computer based Rock Paper Scissor Game:-" << endl
             << "Hope you enjoy!!" << endl
             << "*--------------------*" << endl;
        cout << "if you want to know rules enter rule through your system else continue";
        if (f == "rule")
        {
            cout << "Enter P for paper" << endl;
            cout << "Enter R for rock" << endl;
            cout << "Enter S for paper" << endl;
        }
        else
        {
        }
        while(j!=-1){
        cout << "Time for Match:" << endl
             << "Enter your choice" << endl;
        cin >> n;
        if (comp_choice == n)
        {
            count++;
            cout << "it's a DRAW" << endl;
        }
        
        if(comp_choice==r && n==p || comp_choice==s && n==r || comp_choice==p && n==s ){
            cout<<"you won"<<endl;
        }
       if(comp_choice==p && n==r || comp_choice==r && n==p|| comp_choice==s && n==p){
            cout<<"computer won"<<endl;
        }
         
        cout<<"if you want to playy more match enter 1 else -1"




        
    }
}
}

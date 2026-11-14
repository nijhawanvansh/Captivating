#include <iostream>
using namespace std;

string n;
int x =5;
string arr[x]={"BOOK1","BOOK2","BOOK3","BOOK4","BOOK5"};

//USAGE OF VECTORSSSSS;


class management{

public:

void display(){
    cout<<"Choose the desired option:-"<<endl;
    cout<<"1. Books"<<endl<<"2. Students"<<endl<<"3. Exit"<<endl;
    if (n=="1"){
        display_management();
    }
    else if (n=="2"){
        display_student();
    }
    else if (n=="3"){
        return;
    }
    else{
        cout<<"Invalid input"<<endl;
        return;
    }
}


void display_management(){
    cout<<"===== BOOKS MANAGEMENT SYSTEM ====="<<endl;
   
    cout<<"1. Display books"<<endl;
    cout<<"2. Add books"<<endl;
    cout<<"3. Delete books"<<endl;
    cout<<"4. Search books"<<endl;
    cout<<"5. Exit"<<endl;

    cout<<"Enter your choice: ";

}
void display_books(){

}

void display_student(){
    cout<<"===== STUDENT MANAGEMENT SYSTEM ====="<<endl;
   
    cout<<"1. Display students"<<endl;
    cout<<"2. Add students"<<endl;
    cout<<"3. Delete students"<<endl;
    cout<<"4. Search students"<<endl;
    cout<<"5. Exit"<<endl;

    cout<<"Enter your choice: ";

}


















};

int main(){




    return 0;
}
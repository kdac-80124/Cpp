#include "./menu.h"

int menu()
{
    int choice;
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
    cout<<"0. EXIT "<<endl;
    cout<<"1. SET RADIUS "<<endl;
    cout<<"2. GET RADIUS "<<endl;
    cout<<"3. SET HEIGHT "<<endl;
    cout<<"4. GET HEIGHT "<<endl;
    cout<<"5. GET VOLUME OF CYLINDER "<<endl;
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
    cout<<"Enter your choice ";
    cin>>choice;
    return choice;
}
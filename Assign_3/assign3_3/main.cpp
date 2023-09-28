#include"./cylinder.h"
#include"./menu.h"
#include<iostream>
using namespace std;

int main()
{
    cylinder c;
    int choice;

    while((choice = menu()) != 0)
    {
        switch(choice)
        {
            case 1:
            double radius;
            cout<<"Enter the radius ";
            cin>>radius;
            c.setRadius(radius);
            break;
            
            case 2:
            cout<<"Radius is "<<c.getRadius()<<endl;
            break;
            
            case 3:
            double height;
            cout<<"Enter the height ";
            cin>>height;
            c.setHeight(height);
            break;

            case 4:
            cout<<"Height is "<<c.getHeight()<<endl;
            break;

            case 5:
            cout<<"Volume of cylinder is "<<c.getVolume()<<endl;
            break;

            default:
            cout<<"Invalid choice"<<endl;
            break;
        }
    }
    cout<<"Thanks for coming our App please visit again...."<<endl;
    return 0;   
}

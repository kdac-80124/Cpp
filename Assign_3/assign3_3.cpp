#include<iostream>
using namespace std;

class cylinder
{
    private:
    double radius;
    double height;
    
    public:
    cylinder()
    {
        this->radius=0;
        this->height=0;
    }
    cylinder(double radius,double height)
    {
        this->radius=radius;
        this->height=height;
    }

    double getRadius()
    {
        return this->radius;
    }

    void setRadius(double radius)
    {
        this->radius=radius;
    }

    double getHeight()
    {
        return this->height;
    }

    void setHeight(double height)
    {
        this->height=height;
    }

    // double volume()
    // {
    //     return 3.14*this->radius*this->height;
    // }
    
    double getVolume()
    {
        //return this->volume();
        return 3.14 * this->radius * this->radius * this->height;
    }

    void printVolume()
    {
        cout<<"volume of cylinder is "<<this->getVolume()<<endl;
    }
};
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
    return 0;   
}

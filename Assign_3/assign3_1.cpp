#include<iostream>
using namespace std;

class box
{
    private:
    int length;
    int width;
    int height;
    
    public:
    box()
    {
        this->length=0;
        this->width=0;
        this->height=0;
    }
 
    box(int length,int width,int height)
    {
        this->length=length;
        this->width=width;
        this->height=height;
    }

    void accept()
    {
        cout<<"Enter the length of box ";
        cin>>this->length;

        cout<<"Enter the width of box ";
        cin>>this->width;

        cout<<"Enter the height of box ";
        cin>>this->height;
    }

    int volume()
    {
        // int vol;
        // vol=this->length*this->width*this->height;
        // return vol;
        return this->length*this->width*this->height;
    }
    
    void display()
    {
        cout<<"Volume of box is "<<volume()<<endl;
    }
};

int menu()
{
    int choice;
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
    cout<<"0. EXIT"<<endl;
    cout<<"1. ACCEPT VALUES "<<endl;
    cout<<"2. VOLUME OF BOX "<<endl;
    cout<<"3. DISPLAY "<<endl;
    cin>>choice;
    return choice;
}
 int main()
{
    box b;
    int choice;

    while((choice = menu()) != 0)
    {
        switch(choice)
        {
            case 1:
            b.accept();
            break;

            case 2:
            b.volume();
            break;

            case 3:
            b.display();
            break;

            default:
            cout<<"Wrong choice entered "<<endl;
            cout<<"Enter valid choice"<<endl;
            break;
        }
    }
    cout<<"Thanks";
    
    return 0;
}
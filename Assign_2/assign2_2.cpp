#include<iostream>
using namespace std;

class address
{
    private:
    string building;
    string street;
    string city;
    int pin;

    public:
    address()
    {
        this->building="_";
        this->street="_";
        this->city="_";
        this->pin=0;
    }
    address(string building,string street,string city,int pin)
    {
        this->building=building;
        this->street=street;
        this->city=city;
        this->pin=pin;
    }

    void accept()
    {
        cout<<"Enter the name of Building ";
        cin>>this->building;
        cout<<"Enter the name of street ";
        cin>>this->street;
        cout<<"Enter the name of city ";
        cin>>this->city;
        cout<<"Enter the Pincode ";
        cin>>this->pin;
    }

    void display()
    {
            cout<<"****Address****"<<endl;
            cout<<"Building name "<<this->building<<endl;
            cout<<"Street name "<<this->street<<endl;
            cout<<"city name "<<this->city<<endl;
            cout<<"Pincode "<<this->pin<<endl<<endl;
    }

    string get_building()
    {
        return this->building;
    }

    string get_street()
    {
        return this->street;
    }
    
    string get_city()
    {
        return this->city;
    }
    int get_pin()
    {
        return this->pin;
    }

    void set_building(string building)
    {
        this->building=building;
    }

    void set_street(string street)
    {
        this->street=street;
    }
    void set_city(string city)
    {
        this->city=city;
    }
    void set_pin(int pin)
    {
        this->pin=pin;
    }
};

int main()
{
    address a1;
    a1.accept();
    a1.display();

    address a2("xyz","Main_Road","kolapur",416100);
    a2.display();

    address a3;
    a3.set_building("Palava");
    a3.set_street("m.k.road");
    a3.set_city("Thane");
    a3.set_pin(40072);

    cout<<"-------------------------------"<<endl;    
    cout<<a3.get_building()<<endl;
    cout<<a3.get_street()<<endl;
    cout<<a3.get_city()<<endl;
    cout<<a3.get_pin()<<endl;

    return 0;
}
//  Write a menu driven program for Student in CPP language. Create a class student with data
// members roll no, name and marks. Implement the following functions
// void initStudent();
// void printStudentOnConsole();
// void acceptStudentFromConsole();

#include<iostream>
using namespace std;

namespace Nstudent
{
    class Student
{
    private:
    int rollno;
    string name;
    double marks;
    public:
    void initStudent()
    {
        this->rollno=0;
        this->name=" ";
        this->marks=0;
    }
    void printStudentOnConsole()
    {
        cout<<"Students Details"<<endl;
        cout<<"RollNo : "<<this->rollno<<endl;
        cout<<"Name : "<<this->name<<endl;
        cout<<"Marks : "<<this->marks<<endl;
    }
    void acceptStudentFromConsole()
    {
        cout<<"Enter the rollno = ";
        cin>>this->rollno;

        cout<<"Enter the Student name = ";
        cin>>this->name;

        cout<<"Enter the marks = ";
        cin>>this->marks;
    }
};
}
using namespace Nstudent;
int menu()
{
    int choice;
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
    cout<<"0. EXIT "<<endl;
    cout<<"1. INITSTUDENT"<<endl;
    cout<<"2. PRINT STUDENT DETAILS"<<endl;
    cout<<"3. ACCEPT STUDENT DETAILS"<<endl;
    cin>>choice;
    return choice;
}

int main()
{
    Student s1;
    int choice;
    while((choice = menu())!=0)
    {
        switch (choice)
        {
            case 1:
            s1.initStudent();
            break;
            case 2:
            s1.printStudentOnConsole();
            break;
            case 3:
            s1.acceptStudentFromConsole();
            break;
            default:
            cout<<"Wrong Choice"<<endl;
            cout<<"Enter valid choice"<<endl;
            break;
        }
    }
    cout<<"Thanks for using the App"<<endl;
}

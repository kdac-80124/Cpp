#include<stdio.h>

struct Date
{
    int day;
    int month;
    int year;

void initDate()
{
    day=1;
    month=1;
    year=2000;
}
void printDateonConsole()
{
    printf("Date is %d/%d/%d. \n",day,month,year);
} 
void acceptDateonConsole()
{
    printf("Enter the day = ");
    scanf("%d",&day);
    printf("Enter the month = ");
    scanf("%d",&month);
    printf("Enter the year = ");
    scanf("%d",&year);
}
bool isLeapYear()
{
    if(year % 4 == 0 )
    {
        return true;
    }
    else
    {
        return false;
    }
}
};
 

int menu()
{
    int choice;
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("0. Exit\n");
    printf("1. INITDATE\n");
    printf("2. PRINT DATE ON CONSOLE\n");
    printf("3. ACCEPT DATE FROM CONSOLE\n");
    printf("4. ISLEAP YEAR\n");
    printf("Enter your choice \n");
    scanf("%d",&choice);
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    return choice;
}

int main()
{
    struct Date d1;
    int choice;
    while((choice=menu()) != 0)
    {
        switch(choice)
        {
            case 1:
            d1.initDate();
            break;
            case 2:
            d1.printDateonConsole();
            break;
            case 3:
            d1.acceptDateonConsole();
            break;
            case 4:
            if(d1.isLeapYear())
            {
                printf("Entered choice is leap year\n");
            }
           else{   
                printf("Entered choice is not a leap year\n");
            }
            break;
            default:
            printf("Wrong choice \n");
        }
    }
    printf("Thanks for using the app\n");

    return 0;
}
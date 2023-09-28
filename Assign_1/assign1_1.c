#include<stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};
 
void initDate(struct Date * ptrDate )
{
    ptrDate->day=1;
    ptrDate->month=1;
    ptrDate->year=2000;
}
void printDateonConsole(struct Date * ptrDate)
{
    printf("Date is %d/%d/%d. \n",ptrDate->day,ptrDate->month,ptrDate->year);
} 
void acceptDateonConsole(struct Date * ptrDate)
{
    printf("Enter the day = ");
    scanf("%d",&ptrDate->day);
    printf("Enter the month = ");
    scanf("%d",&ptrDate->month);
    printf("Enter the year = ");
    scanf("%d",&ptrDate->year);
}
int menu()
{
    int choice;
    printf("0. Exit\n");
    printf("1. INITDATE\n");
    printf("2. PRINT DATE ON CONSOLE\n");
    printf("3. ACCEPT DATE FROM CONSOLE\n");
    printf("Enter your choice ");
    scanf("%d",&choice);
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
            initDate(&d1);
            break;
            case 2:
            printDateonConsole(&d1);
            break;
            case 3:
            acceptDateonConsole(&d1);
            break;
            default:
            printf("Wrong choice \n");
        }
    }
    printf("Thanks for using the app\n");

    return 0;
}
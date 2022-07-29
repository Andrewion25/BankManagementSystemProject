#include <stdio.h>
#include <stdlib.h>
#define M 100
int menu();
void new_acc();
void view_list();
void edit();
void transact();
void erase();

typedef struct details
{
    char name[M];
    int birth;
    int citizenshipnumber;
    int phone;
    char address[M];
    double cash;

} details;

int main()
{
    details p;
    int choice;
    while (menu)
    {
        choice = menu();
        switch (choice)
        {
        case 1:
            new_acc();
            break;
        case 2:
            view_list();
            break;
        case 3:
            edit();
            break;
        case 4:
            transact();
            break;
        case 5:
            erase();
            break;
        case 6:
            exit(0);
            break;
        }
    }

    new_acc();

    return 0;
}

int menu()
{
    int choice;
    puts("CUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM\n\n\n\n\n\n");
    puts("-------------WELCOME TO THE MAIN MENU--------------------\n");
    puts("1.Create new account\n");
    puts("2.Update information of existing account\n");
    puts("3.For transactions\n");
    puts("4.Check the details of existing account\n");
    puts("5.Removing existing account\n");
    puts("6.View customer's list\n");
    puts("7.Exit\n\n\n\n\n\n");
    puts("Enter your choice:\n");
    scanf("%d", &choice);
}

void new_acc()
{
    details p;
    char sel;
    printf("PLEASE WRITE YOUR PERSONAL DETAILS:\n");
    printf("NAME:");
    scanf("%s", p.name);
    printf("BIRTH:");
    scanf("%d", &p.birth);
    printf("citizenshipnumber:");
    scanf("%d", &p.citizenshipnumber);
    printf("PHONE NUMBER:");
    scanf("%d", &p.phone);
    printf("ADDRESS:");
    scanf("%s", p.address);
    puts("Enter the amount of money to deposit into your bank account");
    scanf("%lf", &p.cash);
    puts("CHOOSE ONE TYPE OF DEPOSIT ACCOUNT:\n\n\n\n a. saving\n b. current\n c. fixed for 1 year\n d. fixed for 2 years\n e. or fixed for 3 years.");
    scanf("%c", &sel);
    printf("You deposited %f $", p.cash);
    switch (sel)
    {
    case 'a':
        puts("you selected saving account");
        break;
    case 'b':
        puts("you selected current account");
        break;
    case 'c':
        puts("you selected fixed for 1 year account");
        break;
    case 'd':
        puts("you selected fixed for 2 years account");
        break;
    case 'e':
        puts("you selected fixed for 3 years account");
        break;
    }
}

void view_list()
{
    details p;
    printf("name:%s\nbirth:%d\ncitizenshipnumber:%d\nphone number:%d\naddress:%s ", p.name, p.birth, p.citizenshipnumber, p.phone, p.address);
}

void edit()
{
    details p;
    puts("Add a new address :");
    scanf("%s", p.address);
    puts("Add a new phone number :");
    scanf("%d", &p.phone);
}

void transact()
{
    details p;
    char select;
    double deposit;
    double withdraw;
    puts("DEAR CUSTOMER CHOOSE THE ACTIVITY YOU WANT :\n\n\na. DEPOSIT\nb.WITHDRAW");
    scanf("%c", &select);
    switch (select)
    {
    case 'a':
        printf("SELECT THE AMOUNT OF CASH THAT YOU WANT TO DEPOIST");
        scanf("%lf", &p.cash);
        break;

    case 'b':
        printf("SELECT THE AMOUNT OF CASH THAT YOU WANT FOR WITHDRAW");
        scanf("%lf", &p.cash);
        break;
    }
}

void erase()
{
    details p;
    int delete (details);
}
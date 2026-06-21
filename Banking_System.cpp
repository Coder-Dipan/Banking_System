//Bank Management System using C++
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;


class bank{
        char name[100],father[100],addr[100],type[10];
        float balance;
    public:
        void open_account();
        void deposit_money();
        void withdraw_money();
        void display_account();
};

void bank::open_account()
{
    cout << "\nEnter Your Full Name : " << endl;
    cin.ignore();
    cin.getline(name,100);
    cout << "\nEnter Your Father's Name : " << endl;
    cin.ignore();
    cin.getline(father,100);
    cout << "\nEnter Your Address : " << endl;
    cin.ignore();
    cin.getline(addr,100);
    cout << "\nType of Account Yot Want to Open saving(S) or current(C): " << endl;
    cin.ignore();
    cin.getline(type,100);
    cout << "\nEnter Your First Deposit Amount : " << endl;
    cin>>balance;

    cout << "\nYour Account is created successfully!" << endl;
}

void bank::deposit_money()
{
    int d;
    cout << "\nEnter amount you want to deposit : " << endl;
    cin >> d;

    balance = balance + d;
    cout << "\nYour Current/Total balance is : " << balance << endl;
}

void bank::withdraw_money()
{
    float w;
    cout << "\nEnter amount you want to withdraw : " << endl;
    cin >> w;

    balance = balance - w;
    cout << "\nYour Remaining balance is : " << balance << endl;

}

void bank::display_account()
{
    cout << "\nYour Name : " << name << endl;
    cout << "\nYour Father's Name : " << father << endl;
    cout << "\nYour Address : " << addr << endl;
    cout << "\nCurrent/Total Balance : " << balance << endl;
}
int main()
{
    bank obj;
    int ch;
    char option;

    cout << "\n<<---------------------------------------------------------------------->>" << endl;
    cout << "\n<<-------------------- Softakers Bank Welcomes You --------------------->>" << endl;
    cout << "\n<<---------------------------------------------------------------------->>" << endl;

    do
    {
    cout << "\n1. Open Account : " << endl;
    cout << "\n2. Deposit Money : " << endl;
    cout << "\n3. Withdraw Money : " << endl;
    cout << "\n4. Display Account : " << endl;
    cout << "\n5. Exit-->" << endl;

    cin >> ch;
    switch (ch) 
    {
        case 1:
            cout << "\n1. Open Account : " << endl;
            obj.open_account();
            break;
        
        case 2:
            cout << "\n2. Deposit Money : " << endl;
            obj.deposit_money();
            break;

        case 3:
            cout << "\n3. Withdraw Money : " << endl;
            obj.withdraw_money();
            break;

        case 4:
            cout << "\n4. Display Account : " << endl;
            obj.display_account();
            break;

        case 5:
            if(ch==5)
            {
                exit(1);
            }

        default:
            cout << "\nPlease Try again and Choose Correct Option !" << endl;
            break;

        }

        
        cout << "\n Do you want to continue banking without exit? Press (Y/N) !" << endl;
        option = getch();

        if((option=='n') || (option=='N'))
        {
            exit(0);
        }
    } while((option=='y') || (option=='N'));
    return 0;
}
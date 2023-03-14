// 2. Program for Parameterized Constructor

#include <iostream>
using namespace std;
class Bank
{
public:
    int bal, accno, wamt, damt;
    Bank(int a, int b) // Parameterized Constructor
    {
        accno = a;
        bal = b;
    }
    void wid();
    void dip();
    void display();
};
void Bank::wid()
{
    cout << "\n\n Enter Account No.:\t";
    cin >> accno;
    cout << "\n Enter Amount to Withdraw:\t";
    cin >> wamt;
    while (wamt > bal)
    {
        cout << "\n Amount Exceeding Balance \n\n\t Enter Valid Amount\t";
        cin >> wamt;
    }
    bal -= wamt;
    cout << "\n\n Remaining Balance:\t" << bal;
};
void Bank::dip()
{
    cout << "\n\n Enter Account No.:\t";
    cin >> accno;
    cout << "\n\n Enter Account To Deposit:\t";
    cin >> damt;
    bal += damt;
    cout << "\n\n Remaining Balance:\t" << bal;
};
void Bank::display()
{
    cout << "\n\n Enter Account No.:\t";
    cin >> accno;
    cout << "\n Balance:\t" << bal;
};
int main()
{
    Bank p(1, 5000);
    int choice;
    do
    {
        cout << "\n\n Enter Your Choice From Following:";
        cout << "\n\n 1.\t Withdraw Amount";
        cout << "\n\n 2.\t Deposite Amount";
        cout << "\n\n 3.\t Display Amount";
        cout << "\n\n 4.\t Exit Program\n\n Choice:\t";
        cin >> choice;
        switch (choice)
        {
        case 1:
            p.wid();
            break;
        case 2:
            p.dip();
            break;
        case 3:
            p.display();
            break;
        case 4:
            break;
        }
    } while (choice <= 3);
}

// 1.  Write a program for Arithmetic Operation by class and Object

#include <iostream>
using namespace std;
class AO
{
public:
    float x, y, z;
    void Add()
    {
        cout << "\nEnter 1st Number : ";
        cin >> x;
        cout << "\nEnter 2nd Number : ";
        cin >> y;
        z = x + y;
        cout << "\n Addition of " << x << " + " << y << " = " << z << endl;
    }
    void Sub()
    {
        cout << "\nEnter 1st Number : ";
        cin >> x;
        cout << "\nEnter 2nd Number : ";
        cin >> y;
        z = x - y;
        cout << "\n Subtraction of " << x << " - " << y << " = " << z << endl;
    }
    void Mul()
    {
        cout << "\nEnter 1st Number : ";
        cin >> x;
        cout << "\nEnter 2nd Number : ";
        cin >> y;
        z = x * y;
        cout << "\n Multiplication of " << x << " * " << y << " = " << z << endl;
    }
    void Div()
    {
        cout << "\nEnter 1st Number : ";
        cin >> x;
        cout << "\nEnter 2nd Number : ";
        cin >> y;
        z = (x) / y;
        cout << "\n Division of " << x << " / " << y << " = " << z << endl;
    }
    void Mod()
    {
        cout << "\nEnter 1st Number : ";
        cin >> x;
        cout << "\nEnter 2nd Number : ";
        cin >> y;
        z = int(x) % int(y);
        cout << "\n Remainder of " << x << " / " << y << " = " << z << endl;
    }
};

int main()
{
    AO Z;
    int s;
    do
    {
        cout << "\nInput\tMenu" << endl;
        cout << "\n 1\t Addition" << endl;
        cout << "\n 2\t Subtraction" << endl;
        cout << "\n 3\t Multiplication" << endl;
        cout << "\n 4\t Division" << endl;
        cout << "\n 5\t Remainder" << endl;
        cout << "\n 6\t Exit" << endl;
        cout << "\nSelect Operation :" << endl;
        cin >> s;

        switch (s)
        {
        case 1:
            Z.Add();
            break;
        case 2:
            Z.Sub();
            break;
        case 3:
            Z.Mul();
            break;
        case 4:
            Z.Div();
            break;
        case 5:
            Z.Mod();
            break;
        }
    } while (s <= 5);
    return 0;
}


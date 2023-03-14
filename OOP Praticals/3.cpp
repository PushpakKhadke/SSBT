// 3. Program for Function Overloading


#include <iostream>
using namespace std;
class area_2D
{
public:
    float r, b, h, ac, at;
    int l, w, s, ar, as;
    float area(float r)
    { // Only One Argument of Float Type
        ac = 3.142857 * r * r;
        cout << "\nArea of Circle = " << ac << endl;
    }
    float area(float b, float h)
    { // Two Arguments of Float Type
        at = 0.5 * b * h;
        cout << "\nArea of Triangle = " << at << endl;
    }
    int area(int l, int w)
    { // Two Arguments of Int Type
        ar = l * w;
        cout << "\nArea of Rectangle = " << ar << endl;
    }
    int area(int s)
    { // Only One Arguments of Int Type
        as = s * s;
        cout << "\nArea of Square = " << as << endl;
    }
};
int main()
{
    area_2D a1;
    float r, b, h;
    int l, w, s;
    cout << "\n Enter The Radius of Circle\t";
    cin >> r;
    a1.area(r);
    cout << "\n Enter The Base And Height of Triangle\t";
    cin >> b >> h;
    a1.area(b, h);
    cout << "\n Enter The Lenght And Width of Rectangle\t";
    cin >> l >> w;
    a1.area(l, w);
    cout << "\n Enter The Side of Square\t";
    cin >> s;
    a1.area(s);
    cout << "\n";
}

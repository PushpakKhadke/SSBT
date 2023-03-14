// 5. Program For Factorial By Using Copy Constructor

# include <iostream>
using namespace std;
class fact{
    private:
        int n;
    public:
        fact(int a){ // Parameterized Constructor
            n = a;
        }
        fact(fact &b){ // Copy Constructor
            int f = 1;
            n = b.n;
            for(int i = 1;i<=b.n;i++)
                f = f * i;
            cout<<"\n Factorial = "<<f;
        } 
};

int main(){
    int a;
    cout<<"\n Enter the Number = ";
    cin >> a;
    fact p(a);
    fact q(p);
}

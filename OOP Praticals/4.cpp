// 4. Program for Unary Operator Overloading

# include <iostream>
using namespace std;
class admission{
    private:
        int c,m,i,e,t;
        char ch;

    public:
        admission(){
            c = 0;
            m = 0;
            i = 0;
            e = 0;
            t = 0;
        }
        void operator++(){
            cout<<"\nEnter Code From Following:\n";
            cout<<"\n\n\t C For Computer \n\n\t M For Mechanical";
            cout<<"\n\n\t I for IT\n\n\t E for ENTC";
            cout<<"\n\n\t Enter the branch Code = ";
            cin>>ch;
            if(ch=='C'||ch=='c'){
                c++;
                t++;
            }
            else if(ch=='M'||ch=='m'){
                m++;
                t++;
            }
            else if(ch=='I'||ch=='i'){
                i++;
                t++;
            }
            else if(ch=='E'||ch=='e'){
                e++;
                t++;
            }
        }
        void display(){
            cout<<"\nNumber of Admissions Taken:";
            cout<<"\n\nComputer\t"<<c;
            cout<<"\n\nMechanical\t"<<m;
            cout<<"\n\nIT\t"<<i;
            cout<<"\n\nENTC\t"<<e;
            cout<<"\n\n\nTotal Admissions\t"<<t;
        }
        void operator--(){
            cout<<"\nEnter Code From Following:\n";
            cout<<"\n\n\t C For Computer\n\n\t M For Mechanical";
            cout<<"\n\n\t I For IT\n\n\t E For ENTC";
            cout<<"\n\n\tEnter branch Code = ";
            cin>>ch;
            if(ch == 'C'||ch=='c'){
                c--;
                t--;
            }
            else if(ch == 'M'||ch=='m'){
                m--;
                t--;
            }
            else if(ch == 'I'||ch=='i'){
                i--;
                t--;
            }
            else if(ch == 'E'||ch=='e'){
                e--;
                t--;
            }
        }
};

int main() {
    admission a;
    int i;
    do{
        cout<<"\nEnter Your Choice:";
        cout<<"\n\n1\t Take Admission\n\n2\t Cancel Admission\n\n3\t Display Admission Count\n\n4\t Exit Program";
        cout<<"\n\n\t Choice = ";
        cin>>i;
        switch (i)
        {
        case 1:
            ++a;
            break;
        case 2:
            --a;
            break;
        case 3:
            a.display();
            break;
        case 4:
            break;
        }
    }while(i<4);
}

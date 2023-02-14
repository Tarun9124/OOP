#include<iostream>
using namespace std;
class Number
{
    int n;
    public:
       Number()
       {
           cout<<"Default Constructor."<<endl;
       }
       Number(Number &i)
       {
           n=i.n;
           cout<<"copy Constructor."<<endl;
       }
       Number(int x)
       {
           n=x;
           cout<<"Parameterized Constructor."<<endl;
       }
       ~Number()
       {
           cout<<"Destructor Invoked."<<endl;
       }
       void input()
       {
           cout<<"Enter the Number:";
           cin>>n;
       }
       void output()
       {
           cout<<n<<endl;
       }
       Number diff(Number h)
       {
           Number t;
           t.n=n-h.n;
           return t;
       }
};
int main()
{
    Number n1,n2,n3;
    n1.input();
    n2.input();
    n2.output();
    n3=n1.diff(n2);
    cout<<"Difference Between Two Objects:";
    n3.output();
}

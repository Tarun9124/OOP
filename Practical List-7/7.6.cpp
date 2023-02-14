#include<iostream>
using namespace std;
class Number
{
    int num;
    public :
       Number()
       {
          cout<<"Default Constructor Called."<<endl;
       }
       Number(int n)
       {
           num = n;
           cout<<"Parameterized Constructor Called."<<endl;
       }
       void input()
       {
           cout<<"Enter Number : ";
           cin>>num;
       }
       void output()
       {
           cout<<"Number = "<<num<<endl;
       }
       Number operator ++()
       {
           Number t;
           t.num = ++num;
           return t;
       }
       Number operator ++(int)
       {
           Number temp;
           temp.num = num++;
           return temp;
       }
};
int main()
{
    Number N1,N2,N3;
    Number N4(3);
    N1.input();
    N2.input();
    N1.output();
    N2.output();
    N1 = N2++;
    N1.output();
    N3 = ++N1;
    N3.output();
}

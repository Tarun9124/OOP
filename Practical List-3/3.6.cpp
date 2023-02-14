#include<iostream>
using namespace std;
class Number
{
   private:
       int in,fr;
   public:
       void getdata()
       {
           cout<<"Enter Integer : ";
           cin>>in;
           cout<<"Enter Fraction : ";
           cin>>fr;
       }
       void print()
       {
           cout<<"n3.add(n1,n2) Function Answer::";
           cout<<in<<"/"<<fr<<endl;
       }
       void print1()
       {
           cout<<"n3=n1.add(n2) Function Answer::";
           cout<<in<<"/"<<fr<<endl;
       }
       void add(Number,Number);
       Number add(Number);
};
void Number::add(Number nn1,Number nn2)
{
    in = nn1.in + nn2.in;
    fr = nn1.fr + nn2.fr;
    if(fr>=100)
    {
        in += fr/100;
        fr %= 100;
    }
}
Number Number::add(Number nn)
{
    Number temp;
    temp.in = in + nn.in;
    temp.fr = fr + nn.fr;
    if(temp.fr>=100)
    {
       temp.in += temp.fr/100;
       temp.fr %= 100;
    }
    return temp;
}
int main()
{
    Number n1,n2,n3;
    n1.getdata();
    n2.getdata();
    n3.add(n1,n2);
    n3.print();
    n3=n1.add(n2);
    n3.print1();
}

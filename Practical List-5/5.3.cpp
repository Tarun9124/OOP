#include<iostream>
using namespace std;
class Dist
{
 int m,cm;
 public:
     void getdata()
     {
        cout<<"Enter Meter :";
        cin>>m;
        cout<<"Enter Centimeter :";
        cin>>cm;
        cout<<endl;
     }
     void show()
     {
        cout<<"Meter = "<<m<<endl<<"Centimeter = "<<cm<<endl;
        cout<<"-------------------------------------"<<endl;
        cout<<endl;
     }
     Dist()
     {
        m=cm=0;
        cout<<"Default Constructor Called::"<<endl;
        cout<<endl;
     }
     Dist(int m1,int c1)
     {
        m = m1;
        cm = c1;
        cout<<"Parameterized Constructor Called::"<<endl;
        cout<<endl;
     }
    Dist(Dist &d)
     {
       m = d.m;
       cm = d.cm;
       cout<<"Copy Constructor Called::"<<endl;
       cout<<endl;
     }
};
int main()
{
  Dist d1;
  d1.show();
  Dist d2(3,18);
  d2.show();
  Dist d3;
  d3.getdata();
  Dist d4(d3);
  d4.show();
}

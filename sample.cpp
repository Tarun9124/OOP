#include<iostream>
using namespace std;
class Dist
{
   private:
       int feet,inch;
   public:
       void getdata()
       {
         cout<<"Enter Feet:";
         cin>>feet;
         cout<<"Enter Inch:";
         cin>>inch;
       }
       void show()
       {
         cout<<"Feet = "<<feet<<endl<<"Inch = "<<inch<<endl;
       }
       Dist()
      {
        cout<<"Default Constructor Called::"<<endl;
        cout<<endl;
      }
      Dist(int f1,int i1)
      {
        feet = f1;
        inch = i1;
        cout<<"Parameterized Constructor Called::"<<endl;
        cout<<endl;
      }
      ~Dist()
      {
        cout<<"Object Destroyed"<<endl;
      }
      Dist operator++()
      {
        Dist t;
        t.inch = ++inch;
        if(inch>=12)
        {
        feet += (inch/12);
        inch %=12;
        t.feet = feet;
        t.inch = inch;
        }
        return t;
      }
      void show1()
      {
      cout<<"Feet = "<<feet<<endl<<"Inch = "<<inch<<endl;
      }
    Dist operator +(Dist);
};
Dist Dist::operator +(Dist nn)
{
    Dist temp;
    temp.feet = feet + nn.feet;
    temp.inch = inch + nn.inch;
    if(temp.inch>=12)
    {
        temp.feet += (temp.inch/12);
        temp.inch %=12;
    }
    return temp;
}
int main()
{
    Dist d1,d2,d3,d7;
    d1.getdata();
    d2.getdata();
    d3=d1+d2;
    Dist d4(12,11);
    cout<<"After Addition::"<<endl;
    d3.show();
    d4.getdata();
    d7=++d4;
    cout<<"After ADD1 Function::"<<endl;
    d7.show1();
}

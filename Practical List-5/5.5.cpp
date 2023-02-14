#include<iostream>
using namespace std;
class time
{
  int hr,Min,sec;
  public:
      void enter()
      {
        cout<<"Enter Hour:";
        cin>>hr;
        cout<<"Enter Minute:";
        cin>>Min;
        cout<<"Enter Second:";
        cin>>sec;
      }
      void put()
      {
        cout<<hr<<":"<<Min<<":"<<sec<<endl;
        cout<<"-------------------------------------"<<endl;
      }
      time()
     {
        hr=Min=sec=0;
        cout<<"Default Constructor Called::"<<endl;
        cout<<endl;
     }
     time(int h,int m,int s)
     {
        hr = h;
        Min = m;
        sec = s;
        cout<<"Parameterized Constructor Called::"<<endl;
        cout<<endl;
     }
    time(time &d)
     {
       hr = d.hr;
       Min = d.Min;
       sec = d.sec;
       cout<<"Copy Constructor Called::"<<endl;
       cout<<endl;
     }
     ~time()
     {
        cout<<"Destructor Called."<<endl;
     }
};
int main()
{
  time t1;
  t1.put();
  time t2(11,55,55);
  t2.put();
  time t3;
  t3.enter();
  time t4(t3);
  t4.put();
}

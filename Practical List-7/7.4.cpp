#include<iostream>
using namespace std;
class time
{
  int hr,m;
  public:
      void input()
      {
        cout<<"Enter Hour:";
        cin>>hr;
        cout<<"Enter Minute:";
        cin>>m;
      }
      int operator ==(time t)
      {
        int temp1,temp2;
        temp1 = hr * 60;
        temp1 += m;
        temp2 = t.hr * 60;
        temp2 += t.m;
        if(temp1==temp2)
            return 1;
        else return 0;
      }
};
int main()
{
    time t1,t2;
    t1.input();
    t2.input();
    if(t1==t2)
        cout<<"Both Objects are same."<<endl;
    else cout<<"Both Objects are Different."<<endl;

}

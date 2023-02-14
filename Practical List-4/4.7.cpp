#include<iostream>
using namespace std;
class dollar;
class rupee
{
    int r;
    public:
    void get()
    {
    cout<<"Enter Rupee:";
    cin>>r;
    }
    friend void compare(rupee,dollar);
};
class dollar
{
    int d;
    public:
    void get()
    {
    cout<<"Enter Dollar:";
    cin>>d;
    }
    friend void compare(rupee,dollar);
};
void compare(rupee rr,dollar dd)
{
   int temp;
   temp = dd.d * 70;
   if(rr.r>temp)
    cout<<"Rupee is Larger than dollar.";
   else cout<<"Dollar is Larger than rupee.";
}
int main()
{
  rupee r1;
  dollar d1;
  r1.get();
  d1.get();
  compare(r1,d1);
}


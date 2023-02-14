#include<iostream>
using namespace std;
class fah;
class cel
{
  float c;
  public:
      void get()
      {
      cout<<"Enter Celcius:";
      cin>>c;
      }
      friend void compare(cel,fah);
};
class fah
{
  float f;
  public:
      void get()
      {
      cout<<"Enter Fahernheit:";
      cin>>f;
      }
      friend void compare(cel,fah);
};
void compare(cel cc,fah ff)
{
  float t;
  t = (ff.f-32)*0.56;

  if(t>cc.c)
    cout<<"Fahernheit Temperature is more colder.";
  else
    cout<<"Celcius Temperature is more colder.";
}
int main()
{
  cel c1;
  fah f1;
  c1.get();
  f1.get();

  compare(c1,f1);
}

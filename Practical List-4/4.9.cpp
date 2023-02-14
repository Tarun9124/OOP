#include<iostream>
using namespace std;
class office;
class house
{
  public:
      int l1,w1;
      void get();
      void put();
      friend void comapre(house,office);
};
class office
{
  int l2,w2;
  public:
      void get();
      void put();
      friend void compare(house,office);
};
void house::get()
{
  cout<<"For House::"<<endl;
  cout<<"Enter length:";
  cin>>l1;
  cout<<"Enter width:";
  cin>>w1;
}
void house::put()
{
  cout<<"-----------------------------------------------------------"<<endl;
  cout<<"Length of House = "<<l1<<endl<<"Width of House= "<<w1<<endl;
  cout<<"-----------------------------------------------------------"<<endl;
}
void office::get()
{
  cout<<"For Office::"<<endl;
  cout<<"Enter length:";
  cin>>l2;
  cout<<"Enter width:";
  cin>>w2;
}
void office::put()
{
  cout<<"Length of Office = "<<l2<<endl<<"Width of Office = "<<w2<<endl;
  cout<<"-----------------------------------------------------------"<<endl;
}
void compare(house h,office o)
{
  int ha,oa;
  ha = h.l1*h.w1;
  oa = o.l2*o.w2;

  if(ha>oa)
    cout<<"Area Of House is Larger than Office.";
  else cout<<"Area Of Office is Larger than House.";
}
int main()
{
  house h1;
  office o1;
  h1.get();
  o1.get();
  h1.put();
  o1.put();
  compare(h1,o1);
}


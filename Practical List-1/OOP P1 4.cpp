#include<iostream>
using namespace std;
int main()
{
  char c[10];
  int unit;
  float bill;
  cout<<"Enter Customer No. : ";
  cin>>c;
  cout<<"\nEnter Unit : ";
  cin>>unit;
  cout<<"\nCustomer No is - "<<c;
  if(unit>=0 && unit<=100)
    bill = unit*0.70;
  else if(unit>=101 && unit<=250)
    bill = 70 + ((unit-100)*0.85);
  else if(unit>=251 && unit<=400)
    bill = 197.5 + ((unit-250)*1.00);
  else
    bill = 347.5 + ((unit-400)*1.20);

  cout<<"\nYour Bill is : "<<bill<<" Rs."<<endl;
}

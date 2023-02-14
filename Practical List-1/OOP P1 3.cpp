#include<iostream>
using namespace std;
int main()
{
  float rs;
  cout<<"Enter Ruppes in Float:";
  cin>>rs;
  int rupee = (int)rs;
  int paisa = (rs-rupee)*100;
  cout<<"Rs. "<<rs<<" = "<<rupee<<" Rupee ";
  cout<<paisa<<" Paisa";
}

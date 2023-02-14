#include<iostream>
using namespace std;
int& smallzero(int &a,int &b)
{
    if(a<b)
    {
      return a;
    }
    else
    {
     return b;
    }
}
int main()
{
  int n1,n2;
  cout<<"Enter First Number : ";
  cin>>n1;
  cout<<"Enter Second Number : ";
  cin>>n2;

  smallzero(n1,n2) = 0;
  cout<<"A = "<<n1;
  cout<<"\nB = "<<n2;
}

#include<iostream>
using namespace std;
int& max_min(int &a,int &b)
{
    if(a>b)
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

  max_min(n1,n2) = 100;
  cout<<"A = "<<n1;
  cout<<"\nB = "<<n2;
}

#include<iostream>
using namespace std;
int power(int a,int n)
{
    int ans;
    if(n==1)
        return a;
    else (ans = a * power(a,n-1));
         return ans;
}
int main()
{
   int a,n;
   cout<<"Enter Value Of Base:";
   cin>>a;
   cout<<"Enter Value Of Power:";
   cin>>n;
   cout<<"Power of Base^Power = "<<power(a,n);
}

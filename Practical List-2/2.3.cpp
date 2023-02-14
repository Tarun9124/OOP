#include<iostream>
using namespace std;
int power(int a=2,int n=2)
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
   cout<<"By Given Values::"<<endl;
   cout<<a<<"^"<<n<<"="<<power(a,n)<<endl;
   cout<<"---------------------------"<<endl;
   cout<<"Use Of Default Arguments::"<<endl;
   cout<<"Power of Base^Power = "<<power();
}

#include<iostream>
using namespace std;
int add(int a,int b)
{
    int ans;
    if(b==0)
        return a;
    else (ans = 1 + add(a,b-1));
         return ans;
}
int main()
{
   int x,y;
   cout<<"Enter Two Numbers :";
   cin>>x>>y;
   cout<<"Addition = "<<add(x,y);
}

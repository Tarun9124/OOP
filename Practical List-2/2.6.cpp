#include<iostream>
using namespace std;
int mul(int a,int b)
{
    int ans;
    if(b==1)
        return a;
    else if (b==0 || a==0)
        return 0;
    else if (ans = a + mul(a,b-1));
         return ans;
}
int main()
{
   int x,y;
   cout<<"Enter Two Numbers :";
   cin>>x>>y;
   cout<<"Multiplication= "<<mul(x,y);
}

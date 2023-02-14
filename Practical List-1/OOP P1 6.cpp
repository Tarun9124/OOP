#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,r;
    cout<<"Enter a Number : ";
    cin>>n;
    while(n>0){
       r = n%10;
       sum = sum+r;
       n = n/10;
       }
   cout<<"Sum of Digits is "<<sum<<endl;
   return 0;
}


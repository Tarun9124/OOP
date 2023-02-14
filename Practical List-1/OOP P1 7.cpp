#include<iostream>
using namespace std;
int main()
{
    int fibo(int,int,int);
    int n1=0,n2=1;
    int n;
    float ans;
    cout<<"Enter No of Elements After 0 & 1 : ";
    cin>>n;
    cout<<"Fibonacci Series : ";
    cout<<n1<<" "<<n2<<" ";
    fibo(0,1,n);
}
int fibo(int f,int s,int n)
{
    if(n==1)
    cout<<f+s<<" ";
    else
    {
        cout<<f+s<<" " ;
        fibo(s,f+s,n-1);
    }
    return 0;
}

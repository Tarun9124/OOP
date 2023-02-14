#include<iostream>
using namespace std;
void call_by_value(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
}
void call_by_ref(int &a,int &b)
{
   int temp=a;
   a=b;
   b=temp;
}
void call_by_add(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{
   int n1,n2;
   cout<<"Enter First Int : ";
   cin>>n1;
   cout<<"Enter Second Int : ";
   cin>>n2;

   cout<<"\nCall By Value::";
   cout<<"\nBefore Swapping";
   cout<<"\nn1 = "<<n1<<"\nn2 = "<<n2;
   call_by_value(n1,n2);
   cout<<"\nAfter Swapping";
   cout<<"\nn1 = "<<n1<<"\nn2 = "<<n2;
   cout<<"\n---------------------------------";
   cout<<"\nCall By Reference::";
   cout<<"\nBefore Swapping";
   cout<<"\nn1 = "<<n1<<"\nn2 = "<<n2;
   call_by_ref(n1,n2);
   cout<<"\nAfter Swapping";
   cout<<"\nn1 = "<<n1<<"\nn2 = "<<n2;
   cout<<"\n---------------------------------";
   cout<<"\nCall By Address::";
   cout<<"\nBefore Swapping";
   cout<<"\nn1 = "<<n1<<"\nn2 = "<<n2;
   call_by_add(&n1,&n2);
   cout<<"\nAfter Swapping";
   cout<<"\nn1 = "<<n1<<"\nn2 = "<<n2;
}


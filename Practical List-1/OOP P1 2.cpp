#include<iostream>
using namespace std;
int main()
{
   int i = 77;
   float f = 17.66f;
   double d = 70.342;
   char ch = 'T';
   cout<<"Original Values:";
   cout<<endl<<"\nint i="<<i;
   cout<<endl<<"float f="<<f;
   cout<<endl<<"double d="<<d;
   cout<<endl<<"char c="<<ch;
   cout<<endl<<"\nAfter Type Casting:";
   cout<<endl<<"\nint in Char format      : "<<(char)i;
   cout<<endl<<"float in int format     : "<<(int)f;
   cout<<endl<<"double in char format   : "<<(char)d;
   cout<<endl<<"char in int format      : "<<(int)ch;
}

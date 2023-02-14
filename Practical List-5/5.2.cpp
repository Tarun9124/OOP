#include<iostream>
using namespace std;
class alpha
{
   private:
     int data;
   public:
      alpha()
      {
          data = 0;
          cout<<"\nDefault constructor invoked\n";
      }
      alpha(int d)
      {
         data = d;
         cout<<"\nParameterized constructor invoked\n";
      }
      alpha(alpha& a)
      {
          data = a.data;
          cout<<"\nCopy constructor invoked\n";
      }
      ~alpha()
      {
          cout<<"\nDestructor invoked";
      }
      void display()
      {
        cout<<data;
      }
};
int main()
{
    alpha a1(12);
    alpha a2;
    cout<<"a2=";
    a2.display();
    alpha a3 = a1;
    cout<< "a3=";
    a3.display();
}

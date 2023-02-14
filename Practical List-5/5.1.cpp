#include<iostream>
using namespace std;
int c=0;
class counter
{
    public:
        counter()
        {
            c++;
            cout<<"\nObject Created: Object("<<c<<")";
        }
        ~counter()
        {
            cout<<"\nObject Released: Object("<<c<<")";
            c--;
        }
};
main()
{
  cout<<"  In main():";
  counter obj1,obj2;
  cout<<"\n\n  Inside Block:";
  {
      counter object;
  }
  cout<<"\n\n  Again Inside main():";
  return 0;
}

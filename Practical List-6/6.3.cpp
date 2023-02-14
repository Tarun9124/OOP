#include<iostream>
using namespace std;
class T
{
    protected :
       int t;
    public :
       void gett(int a)
       {
         t=a;
       }
};
class Y
{
    protected :
       int y;
    public :
       void gety(int b)
       {
         y=b;
       }
};
class Fun : public  T, public Y
{
    public :
        void display()
        {
            cout<<"T = "<<t<<endl;
            cout<<"Y = "<<y<<endl;
            cout<<"T * Y = "<<t*y<<endl;
        }
};
int main()
{
    cout<<"------------------------------"<<endl;
    cout<<"This is Multiple Inheritance."<<endl;
    cout<<"------------------------------"<<endl;
    Fun F;
    F.gett(4);
    F.gety(5);
    F.display();
}

#include<iostream>
using namespace std;
class student
{
     protected :
        int rollno;
};
class Test : virtual public student
{
    protected :
        int mark;
    public :
        void getm()
        {
            cout<<"Enter Marks : ";
            cin>>mark;
        }
        void putm()
        {
            cout<<"Marks = "<<mark<<endl;
        }
};
class Sports : virtual public student
{
    protected :
        int point;
    public :
        void getpoint()
        {
            cout<<"Enter Points : ";
            cin>>point;
        }
        void putpoint()
        {
            cout<<"Points = "<<point<<endl;
        }
};
class Result : public Test,Sports
{
    public :
        void input()
        {
            cout<<"Enter Roll No. : ";
            cin>>rollno;
            getm();
            getpoint();
        }
        void show()
        {
            cout<<"Enrollment No. :- "<<rollno<<endl;
            putm();
            putpoint();
            cout<<"----------------------------"<<endl;
            cout<<"Total = "<<mark + point<<endl;
            cout<<"----------------------------"<<endl;
        }
};
int main()
{
    cout<<"---------------------------------------"<<endl;
    cout<<"This is Virtual Base Class Inheritance."<<endl;
    cout<<"---------------------------------------"<<endl;
    Result R1;
    R1.input();
    cout<<"---------------------------------------"<<endl;
    R1.show();
}

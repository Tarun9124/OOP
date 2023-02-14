#include<iostream>
using namespace std;
class student
{
    protected :
       int rollno;
    public :
        void getno()
        {
            cout<<"Enter Roll No. : ";
            cin>>rollno;
        }
};
class Test : public student
{
   protected :
       float m1,m2;
   public :
       void getmark()
       {
           cout<<"Enter Mark 1 & Mark 2 : ";
           cin>>m1>>m2;
       }
       void putmark()
       {
           cout<<"Marks 1 = "<<m1<<endl;
           cout<<"Marks 2 = "<<m2<<endl;
       }

};
class result : public Test
{
    float total;
    public :
        void show()
        {
            total = m1 + m2;
            cout<<"-------------------------------"<<endl;
            cout<<"Enrollment No. : "<<rollno<<endl;
            cout<<"Total = "<<total<<endl;
            cout<<"-------------------------------"<<endl;
        }
};
int main()
{
    cout<<"-------------------------------"<<endl;
    cout<<"This is Multi-level Inheritance."<<endl;
    cout<<"-------------------------------"<<endl;
    result obj1;
    obj1.getno();
    obj1.getmark();
    obj1.show();
}


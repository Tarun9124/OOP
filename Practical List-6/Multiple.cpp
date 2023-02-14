#include<iostream>
using namespace std;
class Student{
    protected :
        int roll_no;
    public :
        void getno()
        {
        cout<<"Enter Roll-no: ";
        cin>>roll_no;
        }
        void putno()
        {
         cout<<"Roll_No: "<<roll_no;
        }
};
class Test {
    protected :
        float m1,m2;
    public :
        void getm()
        {
        cout<<"Enter Marks 1: ";
        cin>>m1;
        cout<<"Enter Marks 2: "<<endl;
        cin>>m2;
        }
        void putm()
        {
         cout<<"Maths: "<<m1<<endl;
         cout<<"Computer: "<<m2<<endl;
        }
};
class Result : public Test, Student{
    float total;
    public:
        void show()
           {
            Test::getm();
            total=((m1+m2)*100)/200;
            Student::putno();
            Test::putm();
            cout<<"Result="<<total<<endl;
           }
};
int main()
{
    Result R1;
    R1.show();
    Student S;
    S.getno();
}

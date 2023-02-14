#include<iostream>
using namespace std;
class Student
{
    protected :
        int rollno;
};
class Engg : public Student
{
    protected :
        int sem;
};
class Medical : public Student
{
    protected :
       int year;
    public :
        void getdata()
        {
           cout<<"Enter Data For Medical ::"<<endl;
           cout<<"---------------------------------"<<endl;
           cout<<"Enter Year : ";
           cin>>year;
        }
};
class IT : public Engg
{
    char sub1[5],sub2[5];
    public :
       void getinfo()
       {
           cout<<"Enter Data For IT Department ::"<<endl;
           cout<<"---------------------------------"<<endl;
           cout<<"Enter Roll No. : ";
           cin>>rollno;
           cout<<"Enter Sem : ";
           cin>>sem;
           cout<<"Enter Subject 1 & Subject 2 : ";
           cin>>sub1>>sub2;
       }
       void display()
       {
           cout<<"---------------------------------"<<endl;
           cout<<"Data Of IT Department ::"<<endl;
           cout<<"---------------------------------"<<endl;
           cout<<"Enrollment No. :- "<<rollno<<endl;
           cout<<"Semester :- "<<sem<<endl;
           cout<<"Subject 1 :- "<<sub1<<endl<<"Subject 2 :- "<<sub2<<endl;
       }
};
class CE : public Engg
{
    char sub1[5],sub2[5];
    public :
       void getinfo()
       {
           cout<<"Enter Data For CE Department ::"<<endl;
           cout<<"---------------------------------"<<endl;
           cout<<"Enter Roll No. : ";
           cin>>rollno;
           cout<<"Enter Sem : ";
           cin>>sem;
           cout<<"Enter Subject 1 & Subject 2 : ";
           cin>>sub1>>sub2;
       }
       void display()
       {
           cout<<"---------------------------------"<<endl;
           cout<<"Data Of CE Department ::"<<endl;
           cout<<"---------------------------------"<<endl;
           cout<<"Enrollment No. :- "<<rollno<<endl;
           cout<<"Semester :- "<<sem<<endl;
           cout<<"Subject 1 :- "<<sub1<<endl<<"Subject 2 :- "<<sub2<<endl;
       }
};
class EC : public Engg
{
    char sub1[5],sub2[5];
    public :
       void getinfo()
       {
           cout<<"Enter Data For EC Department ::"<<endl;
           cout<<"---------------------------------"<<endl;
           cout<<"Enter Roll No. : ";
           cin>>rollno;
           cout<<"Enter Sem : ";
           cin>>sem;
           cout<<"Enter Subject 1 & Subject 2 : ";
           cin>>sub1>>sub2;
       }
       void display()
       {
           cout<<"---------------------------------"<<endl;
           cout<<"Data Of EC Department ::"<<endl;
           cout<<"---------------------------------"<<endl;
           cout<<"Enrollment No. :- "<<rollno<<endl;
           cout<<"Semester :- "<<sem<<endl;
           cout<<"Subject 1 :- "<<sub1<<endl<<"Subject 2 :- "<<sub2<<endl;
       }
};
int main()
{
    cout<<"---------------------------------"<<endl;
    cout<<"This is Hierarchical Inheritance."<<endl;
    cout<<"---------------------------------"<<endl<<endl;
    IT i1;
    CE c1;
    EC e1;
    Medical M1;
    i1.getinfo();
    cout<<endl;
    c1.getinfo();
    cout<<endl;
    e1.getinfo();
    cout<<endl;
    M1.getdata();
    cout<<endl;
    i1.display();
    cout<<endl;
    c1.display();
    cout<<endl;
    e1.display();
    cout<<endl;
}

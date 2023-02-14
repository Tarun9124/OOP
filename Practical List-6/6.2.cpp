#include<iostream>
using namespace std;
class student
{
    protected :
        int rollno;
    public :
        void getno()
        {
            cout<<"Enter Roll No : ";
            cin>>rollno;
        }

};
class test : public student
{
   protected :
       float m1,m2;
   public :
       void getmarks()
       {
           cout<<"Enter Marks 1 & 2 : ";
           cin>>m1>>m2;
       }
};
class sports
{
  protected :
    float score;
  public :
     void getscore()
     {
         cout<<"Enter Score : ";
         cin>>score;
     }

};
class result : public test,public sports
{
       float total;
    public :
         void display()
         {
             total = m1 + m2 + score;
             cout<<"Roll No : "<<rollno<<endl;
             cout<<"Marks 1 : "<<m1<<endl<<"Marks 2 : "<<m2<<endl;
             cout<<"Sports Score : "<<score<<endl<<endl;;
             cout<<"---------------------------------"<<endl;
             cout<<"Total Obtained Marks : "<<total<<endl;
             cout<<"---------------------------------"<<endl;
         }
};
int main()
{
    cout<<"---------------------------------"<<endl;
    cout<<"This is Hybrid Inheritance."<<endl;
    cout<<"---------------------------------"<<endl<<endl;
    result r;
    r.getno();
    r.getmarks();
    r.getscore();
    r.display();
}

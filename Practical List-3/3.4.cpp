#include<iostream>
using namespace std;
class student
{
   private:
   char name[10];
   int rollno,total;
   int marks[3];
   public:
   void getdata()
   {
      cout<<"Enter Roll No.:";
      cin>>rollno;

      cout<<"Enter Name:";
      cin>>name;

        for(int j=0;j<3;j++)
        {
         cout<<"Enter Marks:";
         cin>>marks[j];
        }
    }
   void display()
   {
    cout<<rollno<<"\t\t"<<name<<"\t"<<total<<endl;
   }
   void result()
   {
    total=0;
    for(int k=0;k<=2;k++)
    {
       total += marks[k];
    }
   }
};
int main()
{
    student s[4];
    for(int i=0;i<=3;i++)
      s[i].getdata();
    cout<<"Roll No.\tName\tTotal"<<endl;
    for(int i=0;i<=3;i++)
    {
        s[i].result();
        s[i].display();
    }
}

#include<iostream>
using namespace std;
struct student
{
   char name[10];
   int rollno;
   int marks[3];
   int total;
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
    {
      cout<<"Enter Roll No.:";
      cin>>s[i].rollno;

      cout<<"Enter Name:";
      cin>>s[i].name;

        for(int j=0;j<3;j++)
        {
         cout<<"Enter Marks:";
         cin>>s[i].marks[j];
        }
    }
    cout<<"Roll No.\tName\tTotal ";
    for(int i=0;i<=3;i++)
        {
        s[i].result();
        cout<<"\n "<<s[i].rollno<<"\t"<<s[i].name<<"\t"<<s[i].total;
        }
}


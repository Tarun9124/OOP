#include<iostream>
using namespace std;
class Player
{
   char name[10];
   int age;
   public:
       void getdata()
       {
           cout<<"Enter Name of Player:";
           cin>>name;
           cout<<"Enter Age:";
           cin>>age;
       }
       void display()
       {
           cout<<name<<"\t"<<age<<endl;
       }
};
int main()
{
    Player p[2];
    for(int i=0;i<3;i++)
        p[i].getdata();
    cout<<"Name\tAge"<<endl;
    for(int i=0;i<3;i++)
        p[i].display();
}

#include<iostream>
using namespace std;
class calculator
{
    int num;
    public:
       void get()
       {
           cout<<"Enter Number : ";
           cin>>num;
       }
       void display()
       {
           cout<<num<<endl;
       }
       calculator operator + (calculator);
       calculator operator - (calculator);
       calculator operator * (calculator);
       calculator operator / (calculator);
};
calculator calculator::operator + (calculator aa)
{
    calculator temp;
    temp.num = num + aa.num;
    return temp;
}
calculator calculator::operator - (calculator aa)
{
    calculator temp;
    temp.num = num - aa.num;
    return temp;
}
calculator calculator::operator * (calculator aa)
{
    calculator temp;
    temp.num = num * aa.num;
    return temp;
}
calculator calculator::operator / (calculator aa)
{
    calculator temp;
    temp.num = num / aa.num;
    return temp;
}
int main()
{
   calculator obj1,obj2,obj3;
   obj1.get();
   obj2.get();
   cout<<"----------------------"<<endl;
   cout<<"First Number Entered : ";
   obj1.display();
   cout<<endl;
   cout<<"Second Number Entered : ";
   obj2.display();
   cout<<"----------------------"<<endl;
   cout<<endl;
   cout<<"Addition = ";
   obj3 = obj1 + obj2;
   obj3.display();
   cout<<"----------------------"<<endl;
   cout<<"Subtraction = ";
   obj3 = obj1 - obj2;
   obj3.display();
   cout<<"----------------------"<<endl;
   cout<<"Multiplication = ";
   obj3 = obj1 * obj2;
   obj3.display();
   cout<<"----------------------"<<endl;
   cout<<"Divison = ";
   obj3 = obj1 / obj2;
   obj3.display();
   cout<<"----------------------"<<endl;
}


#include<iostream>
using namespace std;
class Person
{
    protected:
        char name[20];
        int age;

};
class Info : public Person
{
    int ht,wt;
    public:
        void get()
        {
            cout<<"Enter Name : ";
            cin>>name;
            cout<<"Enter Age : ";
            cin>>age;
            cout<<"Enter Weight in KG : ";
            cin>>wt;
            cout<<"Enter Height in Meter : ";
            cin>>ht;

        }
        void show()
        {
            cout<<"---------------------------"<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
            cout<<"Weight : "<<wt<<endl;
            cout<<"Height : "<<ht<<endl;
            cout<<"---------------------------"<<endl;
        }
};
int main()
{
    cout<<"---------------------------"<<endl;
    cout<<"This is Simple Inheritance."<<endl;
    cout<<"---------------------------"<<endl;
    Info obj1;
    obj1.get();
    obj1.show();
}

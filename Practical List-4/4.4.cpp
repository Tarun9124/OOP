#include<iostream>
using namespace std;
class employee
{
    char name[10];
    int age;
    float sal;
    public:
        void input()
        {
            cout<<"Enter Name :";
            cin>>name;
            cout<<"Enter Age :";
            cin>>age;
            cout<<"Enter Salary:";
            cin>>sal;
        }
        void show()
        {
            cout<<name<<"\t"<<age<<"\t"<<sal<<endl;
        }
};
int main()
{
    employee e[3];
    for(int i=0;i<3;i++)
        e[i].input();
    cout<<"Name\tAge\tSalary"<<endl;
    for(int i=0;i<3;i++)
        e[i].show();

}

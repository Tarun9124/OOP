#include<iostream>
using namespace std;
class Test
{
    int code;
    static int cnt;
    public:
    void getcode()
    {
        code = ++cnt;
    }
    void showcode()
    {
        cout<<"No = "<<code<<endl;
    }
    static void showcount()
    {
        cout<<"Count = "<<cnt;
        cout<<endl;
    }
};
int Test::cnt;
int main()
{
    Test t1,t2;
    t1.getcode();//1
    t2.getcode();//2
    Test::showcount();//2
    Test t3;
    t3.getcode();//3
    t1.showcode();//1
    t2.showcode();//2
    t3.showcode();//3
}

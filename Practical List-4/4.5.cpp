#include<iostream>
using namespace std;
class ACC
{
   private:
    char name[10];
    int acno;
    float bal;
   public:
    void read()
    {
        cout<<"Name:";
        cin>>name;
        cout<<"Account No:";
        cin>>acno;
        cout<<"Balance:";
        cin>>bal;
    }
    friend void showbal(ACC);
};
void showbal(ACC obj)
{
    cout<<"Balance of A/C No "<<obj.acno<<" is RS. "<<obj.bal;
}
int main()
{
    ACC ah;
    ah.read();
    showbal(ah);
}

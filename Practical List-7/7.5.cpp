#include<iostream>
using namespace std;
class rupee
{
    int rs,p;
    public :
        void getdata()
        {
            cout<<"Enter Rupee:";
            cin>>rs;
            cout<<"Enter Paisa:";
            cin>>p;
        }
        void putdata()
        {
            cout<<"Rupee = "<<rs<<endl<<"Paisa = "<<p<<endl;
        }
        rupee()
        {
          rs = 100;
          p = 0;
        }
       rupee(rupee &r)
        {
           cout<<"copy constructor called."<<endl;
        }
        void operator =(rupee r1)
        {
           rs = r1.rs;
           p = r1.p;
           cout<<"Operator Called."<<endl;
        }
};
int main()
{
    rupee r1,r2;
    r1.putdata();
    r2.putdata();

    r1.getdata();
    r1.putdata();
    r2 = r1;
    cout<<"First Object Copied in Second Object."<<endl;
    r2.putdata();
}

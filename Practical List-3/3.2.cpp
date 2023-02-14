#include<iostream>
using namespace std;
class Dist
{
  private :
    int feet,inch;
  public :
    void getdata()
    {
        cout<<"Enter Feets : ";
        cin>>feet;
        cout<<"Enter Inches : ";
        cin>>inch;
    }
    void convert()
    {
        if(inch>=12)
        {
        feet += (inch/12);
        inch %=12;
        }
    }
    void show()
    {
      cout<<"Distance = "<<feet<<"'"<<inch<<"\"";
    }
};
int main()
{
    Dist d1;
    d1.getdata();
    d1.convert();
    d1.show();

}

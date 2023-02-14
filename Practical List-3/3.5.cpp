#include<iostream>
using namespace std;
class Dist
{
   private :;
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
      cout<<"Distance = "<<feet<<"\'"<<inch<<"\"";
    }
    void add(Dist);
};
void Dist::add(Dist dd)
{
    feet = feet + dd.feet;
    inch = inch + dd.inch;
    if(inch>=12)
    {
        feet += inch/12;
        inch = inch%12;
    }
}
int main()
{
    Dist d1,d2;
    d1.getdata();
    d2.getdata();
    d1.convert();
    d1.add(d2);
    d1.show();

}

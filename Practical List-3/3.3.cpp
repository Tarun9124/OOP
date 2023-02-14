#include<iostream>
using namespace std;
class Time
{
    private:
    int hour,minute;
    public:
    void gettime()
    {
         cout<<"\nEnter Hour : ";
         cin>>hour;
         cout<<"Enter Minute : ";
         cin>>minute;
    }
    void convert()
    {
      if(minute>=60)
      {
          hour += minute/60;
          minute %=60;
      }
    }
    void showtime()
    {
      cout<<"Time = "<<hour<<" Hour "<<minute<<" Minute";
    }

};
int main()
{
    Time T1;
    for(int i=0;i<3;i++)
    {
    T1.gettime();
    T1.convert();
    T1.showtime();
    }
}

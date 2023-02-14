#include<iostream>
using namespace std;
class Num
{
  int n;
  static int cnt;
  public :
      void getdata(int x)
      {
          n=x;
          cnt++;
      }
      void showcount()
      {
          cout<<"Count = "<<cnt;
          cout<<endl;
      }
};
int Num::cnt;
int main()
{
    Num N1,N2;
    N1.showcount();
    N2.showcount();
    N1.getdata(10);
    N2.getdata(20);
    cout<<"After Data Entering :"<<endl;
    N1.showcount();
    N2.showcount();
}

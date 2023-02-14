#include<iostream>
using namespace std;
class alpha
{
    protected :
        int x;
    public :
        alpha(int i)
        {
          x=i;
          cout<<"alpha initiated\n";
        }
        ~alpha()
        {
          cout<<"alpha Released\n";
        }
};
class beta
{
    protected :
        float y;
    public :
        beta(float j)
        {
            y=j;
            cout<<"beta initialized\n";
        }
         ~beta()
        {
          cout<<"beta Released\n";
        }
};
class gamma : public alpha , public beta
{
  int m,n;
  public :
      gamma(int a,float b,int c,int d): alpha(a),beta(b)
      {
          m = c;
          n = d;
          cout<<"gamma initialized\n";
      }
      ~gamma()
        {
          cout<<"gamma Released\n";
        }
      void show_mn()
      {
          cout<<"X = "<<x<<endl;
          cout<<"Y = "<<y<<endl;
          cout<<"M = "<<m<<endl;
          cout<<"N = "<<n<<endl;
      }
};
int main()
{
    gamma g(10,20.8,30,40);
    cout<<"-----------------"<<endl;
    g.show_mn();
    cout<<"------------------"<<endl;
}

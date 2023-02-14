#include<iostream>
using namespace std;
inline int square(int x)
{
    return x*x;
}
inline int cube(int x)
{
    return x*x*x;
}
int main()
{
    int x;
    cout<<"Enter A Number:";
    cin>>x;
    cout<<"Square Of "<<x<<" = "<<square(x);
    cout<<"\nCube Of "<<x<<" = "<<cube(x);

}

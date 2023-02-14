#include<iostream>
using namespace std;
class bank
{
    int acno;
    char name[50];
    int acc_type;
    float bal;
    public:
    void init_val()
    {
      int b;
      cout<<"Enter 1 For Saving Account"<<endl<<"Enter 2 For Current Account"<<endl;
      cout<<"Enter Account Type : ";
      cin>>acc_type;
      cout<<"Enter Account Number : ";
      cin>>acno;
      cout<<"Enter Account Holder Name : ";
      cin>>name;
      cout<<"Enter Balance : ";
      cin>>b;
      bal +=b;
    }
    int check(int a)
    {
      if(acno == a)
        return 1;
      else return 0;
    }
    void deposit()
    {
        int da;
        cout<<"Enter Deposit Amount = ";
        cin>>da;
        while(da<0){
            cout<<"Enter Valid Amount : ";
            cin>>da;
        }
        bal +=da;
        cout<<da<<" is Deposited"<<endl;
        cout<<"Final Balance = "<<bal<<" INR"<<endl;
    }
    void withdraw()
    {
        int wa,w;
        cout<<"Enter Withdraw Ammount = ";
        cin>>wa;
        w = bal - wa;
        while(w<1000)
        {
         cout<<"Enter valid Amount:";
         cin>>wa;
         w = bal - wa;
        }
        bal -= wa;
        cout<<wa<<" is withdrawed"<<endl;
        cout<<"Final Balance = "<<bal<<" INR"<<endl;
    }
};
int main()
{
    bank c[4];
    for(int i=0;i<2;i++)
    {
      c[i].init_val();
    }
     int a,flag=0;
     cout<<endl<<"Enter Account Number to Check:";
     cin>>a;

     for(int i=0;i<2;i++)
     {
        if(c[i].check(a))
        {
            flag=1;
            cout<<"1.Deposit:";
            cout<<endl<<"2.Withdraw:";
            int ch;
            cout<<endl<<"Enter Choise:";
            cin>>ch;
            switch(ch)
            {
                case 1:
                   c[i].deposit();
                   break;
                case 2:
                   c[i].withdraw();
                   break;
                default:
                    cout<<"Invalid Choice:";
                    break;
            }
        }
     }
     if(flag==0)
     {
        cout<<"Account Does Not Exist.";
     }

}

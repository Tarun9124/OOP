#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0,op;
	cout<<"Press 1.Check whether the no is palindrome no or not\n";
	cout<<"Press 2.Check whether the number is perfect no of not\n";
	cout<<"Press 3. Check whether the number is prime or not\n";
	cout<<"Press 4. Find the factors of a given no\n";
	cout<<"Press 5. To exit the program\n";
	cout<<"Enter Choice:";
	cin>>op;
	if(op!=5)
	{
	    cout<<"Enter Number:";
	    cin>>n;
    }
	switch(op)
	{
	case 1:{
	    int t,r;
	    t=n;
	    while(n>0)
	   {

	    r = n%10;
	    sum = (sum*10)+r;
	    n = n/10;
		}
	    if(t == sum)
	    cout<<t<<" is Palindrome";
	    else
	    cout<<t<<" is not Palindrome";
	    break;
       }
	case 2:{
		for(i=1;i<=n/2;i++)
        {
	        if(n%i == 0)
		    sum = sum + i;
        }
        if(n == sum)
        cout<<n<<" is Perfect Nunmer";
        else
        cout<<n<<" is not Perfect Number";
        break;
	    }
	case 3:{
		int f=0;
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			f=1;
		}
		if(f)
		cout<<n<<" is not Prime";
		else
		cout<<n<<" is Prime";
		break;
	}
	case 4:{
		cout<<"Factors::";
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			cout<<i<<" ";
		}
		break;
	}
	case 5: exit(0); break;
   }
}

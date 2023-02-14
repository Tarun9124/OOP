#include<iostream>
using namespace std;

int add(int n) {
    int sum;
    if(n==1)
        return 1;
    else sum = n + add(n-1);
    return sum;
}

int main() {
    int n;

    cout << "Enter Limit : ";
    cin >> n;

    cout << "Sum = " << add(n);
}



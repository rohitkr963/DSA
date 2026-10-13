#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of n : ";
    cin>>n;
    int sum = 0;
    int reverse;
    
    while(n>0)
     reverse = n%10;
        cout<<reverse;
        n/=10;
}


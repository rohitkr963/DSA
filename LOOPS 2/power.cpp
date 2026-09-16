#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter number of a : ";
    cin>>a;
    cout<<"Enter number of b : ";
    cin>>b;
    int power = 1;
    for(int i=1; i<=b; i++)
    {
        power *= a;
    }
    cout<<"The result is: "<<power;
}



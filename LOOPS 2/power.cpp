#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter number of a : ";
    cin>>a;
    cout<<"Enter number of b : ";
    cin>>b;
    bool flag = true;   // means positive
    if(b<0)
    {
        flag = false;  // means negative
        b = -b;
    }
    float power = 1;
    for(int i=1; i<=b; i++)
    {
        power *= a;
    }
    if(flag==false)
    {
        power = 1/power;
        b = -b;
    }
    if (a== 0 && b == 0)
    {
        cout<<"The result is: undefined";
    }
    else 
    {
        cout<<a<<" raised to the power "<<b<<" is: "<<power;
    }
}



#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of n : ";
    cin>>n;
    int a = 5;
    for(int i = 1; i<=n; i++)
    {
        if(i % 2 != 0 ) a = 1;   // row no add 
        else a = 0;              // even
        for(int j = 1; j<=i; j++)
        {
            cout<<a;
            //fliiping 
            if(a == 1 ) a = 0;
            else a= 1;
        }
        cout<<endl;
    }
}



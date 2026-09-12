
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter your number";
    cin>>n;
    int a = n;
    int count = 0;

    while(n>0){
        n = n/10;
        count++;
    }
    if(a == 0) count = 1; // To handle the case when the input number is 0
    cout<<count;

}
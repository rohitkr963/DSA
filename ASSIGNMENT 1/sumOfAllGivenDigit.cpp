#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of n : ";
    cin>>n;
    int sum = 0;
    while(n>0){
        int res = n%10;
        if(res%2==0){
            sum += res;
        }
        n = n/10;
    }
    cout<<sum;
}


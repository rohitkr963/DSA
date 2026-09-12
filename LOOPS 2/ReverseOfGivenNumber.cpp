
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter your number";
//     cin>>n;
//     int reverse;
//     while(n>0) {
//         reverse = n%10;
//         cout<<reverse;
//         n/=10;
//     }
// }

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter your number";
    cin>>n;
    int rerverse = 0;
    int lastdigit;
    while(n>0) {
        rerverse *=10;
        lastdigit = n%10;
        rerverse += lastdigit;
        n=n/10;
    }
        cout<<rerverse<<endl;
}
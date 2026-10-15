#include<iostream>
using namespace std;

int main() {
    // int x = 5;
    // int y = 10;
    // int* p1 = &x; // Pointer to x
    // int* p2 = &y; // Pointer to y
    // cout<<"Sum of "<<*p1<<" and "<<*p2<<" is: "<<*p1 + *p2<<endl;

    int a, b;
    int* p1 = &a;
    int* p2 = &b;
    cout<<"Enter first numbers: ";
    cin>>*p1;
    cout<<"Enter second numbers: ";
    cin>>*p2;

    cout<<*p1+*p2;
}
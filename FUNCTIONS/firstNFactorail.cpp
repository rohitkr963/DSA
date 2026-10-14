#include<iostream>
using namespace std;

int fact(int a) {
    int factorial = 1;
    for(int i = 1; i<=a; i++){
        factorial *= i;
    }
    return factorial;
}

int main() {
    int a;
    cout<<"Enter two numbers: ";
    cin>>a;
    for(int i = 1; i<=a; i++){
        cout<<i<<"! = "<<fact(i)<<endl;
    }    
}
#include<iostream>
using namespace std;

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 3;
    int b = 1;
    swap(&a, &b);
    cout<<"After swapping: a = "<<a<<", b = "<<b<<endl;
}
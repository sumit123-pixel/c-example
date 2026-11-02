// Write a function int readNumber() that asks the user to enter a number using cin, and returns it. In main(), call it twice and print the sum.

#include <iostream>
using namespace std;

int readnumber(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    return n;
}

int main(){

    int a=readnumber();
    cout<<"Value of a is: "<<a<<endl;

    int b=readnumber();
    cout<<"Value of b is: "<<b<<endl;

    cout<<"Sum: "<<a+b;

return 0;
}
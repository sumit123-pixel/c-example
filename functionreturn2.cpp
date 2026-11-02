//Write a function double getPi() that returns the value of pi (3.14159). In main(), use it to find the area of a circle with radius 5.

#include <iostream>
using namespace std;

int getpi(){
    return 3.14;
}

int main(){
    int pi=getpi();
    int r=5;

    cout<<"Area: "<<pi*r*r<<endl;
    cout<<"Circumference: "<<2*pi*r;

return 0;
}
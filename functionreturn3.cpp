// Write two functions that take an integer and return it increased by 1. One uses call by value, the other call by reference. Print the original variable after each call.

#include <iostream>
using namespace std;

int callval(int n){
    n=n+1;
    return n;
}

int callref(int &m){
    m=m+1;
     return m;
}
int main(){
    int a=5;

    callval(a);
      int x=3;
    callref(x);
return 0;
}
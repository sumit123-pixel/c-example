// Find the GCD of two numbers using Euclid’s algorithm.

#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}

int main(){

    cout<<gcd(40, 100);

return 0;
}
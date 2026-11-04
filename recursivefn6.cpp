// Find the product of digits of a number (1234 gives 24).

#include <iostream>
using namespace std;

int product(int n){
    if( n<10)
    return n;
    else
    return n%10*product(n/10);
}

int main(){

cout<<product(235);

return 0;
}
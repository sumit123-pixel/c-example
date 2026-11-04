// Write a function to calculate power(a, b) without using pow() (power(2, 5) should give 32).

#include <iostream>
using namespace std;

int power(int a, int b){
    if(b==1)
    return a;
    else
    return a*power(a,b-1);
}

int main(){

    cout<<power(2,5);

return 0;
}
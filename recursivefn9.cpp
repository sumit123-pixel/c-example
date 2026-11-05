// Reverse a number using recursion (1234 becomes 4321).

#include <iostream>
using namespace std;

int reverse(int n, int rev){
    if(n==0)
    return rev;
    else
    return reverse(n/10, rev*10+n%10);
}

int main(){

    cout<<reverse(1234, 0);

return 0;
}
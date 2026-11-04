// Count the number of digits in a number (50321 gives 5).

#include <iostream>
using namespace std;

int count(int n){
    if(n<0)
    n=-n;
    if(n<10)
    return 1;
    else
    return 1+count(n/10);
}

int main(){

    cout<<count(123456);

return 0;
}
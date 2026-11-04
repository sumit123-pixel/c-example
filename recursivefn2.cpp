//sum of digits

#include <iostream>
using namespace std;

int sum(int n){
    if(n==0)
    return 0;
    else
    return n%10 + sum(n/10);
}

int main(){

    cout<<sum(4312);

return 0;
}
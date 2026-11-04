// prints number 1 to n

#include <iostream>
using namespace std;

int print(int n){
    if(n==1)
    return 1;
    else
   { return print(n-1);
      cout<<n<<" ";}
}

int main(){

    cout<<print(10);

return 0;
}
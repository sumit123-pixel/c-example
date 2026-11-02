// Write void swapNums(int &a, int &b) and show that the values change in main.

#include <iostream>
using namespace std;

void swapnums(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"value of a is "<<a<<" and value of b is "<<b;
}

int main(){
    int x=3, y=5;

    swapnums(x,y);

return 0;
}
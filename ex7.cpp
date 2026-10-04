//Print the first 10 terms of the series 2, 4, 8, 16, ... (powers of 2).

#include<iostream>

using namespace std;

int main(){
    int a=1;
    for(int i=0; i<10; i++){
        a=a*2;
        cout<<a<<" ";
    }

    return 0;
}
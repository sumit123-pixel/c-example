//program to generate 10 numbers in fibbonacy series

#include<iostream>

using namespace std;

int main(){
    int f0=1, f1=1, f2;

    cout<<f0<<" "<<f1<<'\n';
    for(int i=0; i<10; i++){
        f2=f0+f1;
        cout<<f2<<'\n';
        f0=f1;
        f1=f2;
    }
    return 0;
}
// Swap two numbers using a third variable, then without one.
#include<iostream>

using namespace std;

int main(){
    int a=3, b=4, c;

    c=a;//c=3, a=3, b=4
    b=c;// c=3, a=3, b=3
    

    cout<<a<<endl<<b<<endl;

    return 0;
}
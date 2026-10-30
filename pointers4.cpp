#include<iostream>

using namespace std;

int main(){
    int *q= new int(10); // allocates the memory
    cout<<q<<endl;      // address
    cout<<*q<<endl;            // 10

    delete q;            // clear the memory

char *p= new char('s');
cout<<p<<endl;
cout<<*p;

delete p;
    


    return 0;
}
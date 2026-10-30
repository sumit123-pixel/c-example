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

char *r=new char[5];
r= "sumit";

cout<<endl<<r<<endl;
cout<<*r;
    
delete r;
    return 0;
}
// pointer to pointer and dereference operator

#include <iostream>
using namespace std;

int main(){
     int a=7;
     int *ptr=&a;
     int **ptr2=&ptr;

     cout<<ptr2<<" and "<<&ptr;
     cout<<endl<<*ptr2; 
     cout<<endl<<**ptr2;  // * is a dereference opertor , gives value at the address
return 0;
}
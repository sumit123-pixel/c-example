// pointers and adrress of operator
#include <iostream>
using namespace std;

int main(){
  int a=10;
cout<< &a;

int b=5;
int *ptr=&b;

cout<<endl<<&b<<" and "<<*ptr<<" and "<<ptr;
return 0;
}
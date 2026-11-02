// Write a void function printTable(int n) that prints the multiplication table of n up to 10.

#include <iostream>
using namespace std;

void table(int n){
    int a;
    for(int i=1; i<=10; i++){
      a=n*i;
      cout<<a<<endl;
    }
}

int main(){

    table(5);

return 0;
}
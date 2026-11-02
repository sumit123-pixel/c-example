//functions with return value without arguments

// Write a function int getAge() that takes no arguments and returns your age. Call it in main() and print the result.

// Return a fixed value:

#include <iostream>
using namespace std;

int getage(){
    return 18;
}

int main(){
    int age;
    age=getage();

    cout<<"Age= "<<age;

return 0;
}
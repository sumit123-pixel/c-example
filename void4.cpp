// Write a void function printStars(int n) that prints n stars in one line.

#include <iostream>
using namespace std;

void printstars(int n){
    for(int i=0; i<n; i++){
        cout<<"*";
    }
}

int main(){

printstars(9);

return 0;
}
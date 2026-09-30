// Check whether a number is even or odd.

#include<iostream>

using namespace std;

int main(){
    int a;

    cout<<"Enter any number:"<<endl;
    cin>>a;

    if(a%2==0){
        cout<<a<<" is prime.";
    }
    else{
        cout<<a<<" is not prime.";
    }
    return 0;
}
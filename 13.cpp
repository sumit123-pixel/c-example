// Find the factorial of a number.

#include<iostream>

using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter any number:"<<endl;
    cin>>a;

    for(b=a; b>=1; b--){
        c=b-1;
        b=b*c;
    }
    cout<<b;
  
    return 0;
}
// Find the factorial of a number.

#include<iostream>

using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter any number:"<<endl;
    cin>>a;

    for(b=a; b>=2; b--){
        c=b*(b-1);
    }
    cout<<c;
  
    return 0;
}
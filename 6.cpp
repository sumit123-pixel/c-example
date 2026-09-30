// Find the largest of three numbers.

#include<iostream>

using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;

    if((a>b) && (a>c)){
        cout<<a<<" is larger.";
    }
    else if((b>c) && (b>a)){
        cout<<b<<"is larger.";
    }
    else{
        cout<<c<<"is larger.";
    }
    return 0;
}
// illustratrate nested if

#include<iostream>

using namespace std;

int main(){
    float a, b;
    cout<<"enter a:";
    cin>>a;

    if(a>9){
        b=a+5;
    }
    else{
        if(a==0){
            b=1;
        }
        else{
            b=a-3;
        }
    }
    cout<<'\n'<<b;
}
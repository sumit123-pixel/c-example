// Print the multiplication table of a number.

#include<iostream>

using namespace std;

int main(){
    int a,b;
    cout<<"Enter any number:"<<endl;
    cin>>a;

    for(b=1; b<=10; b++ )
    {cout<<b*a<<endl;
    }
    return 0;
}
// Make a simple calculator using switch (+, -, *, /).

#include<iostream>

using namespace std;

int main(){
    char ch;
    int x, y, z;

    cout<<"Enter x:";
    cin>>x;

    cout<<"Enter y:";
    cin>>y;

      cout<<"Enter among a, b, c, d:"<<endl;
   cin>>ch;

switch (ch) {
    case 'a':
    z=x+y;
    break;
    case 'b':
    z=x-y;
    break;
    case 'c':
    z=x*y;
    break;
    case 'd':
    z=x/y;
    break;
}
cout<<z<<endl;

    return 0;
}
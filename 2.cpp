// Take the radius of a circle and print its area and circumference.

#include<iostream>

using namespace std;

int main(){
    float radius, area, circumference;

    cout<<"enter radius:";
    cin>>radius;

    area= 3.14*radius*radius;
    circumference=2*3.14*radius;

    cout<<area<<endl<<circumference;

    return 0;
}
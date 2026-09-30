//Take two numbers as input and print their sum, difference, product, and quotient.
#include<iostream>

using namespace std;

int main(){
    int a, b;
    int sum, difference, product, quotient;
    cout<<"enter a:"<<endl;
    cin>>a;

    cout<<"enter b:"<<endl;
    cin>>b;

    sum=a+b;
    difference=a-b;
    product=a*b;
    quotient=a/b;

    cout<<"sum is:"<<sum<<endl;
    cout<<"diffence is:"<<difference<<endl;
    cout<<"product is:"<<product<<endl;
    cout<<"quotient is:"<<quotient<<endl;


    return 0;
}
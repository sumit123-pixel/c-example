// Take marks as input and print the grade (A/B/C/D/F).

#include<iostream>

using namespace std;

int main(){
int marks;
cout<<"Enter your marks out of 100:";
cin>>marks;

if(marks>90 && marks<=100) cout<<"A grade";
if(marks>80 && marks<=90) cout<<"B grade";
if(marks>70  && marks<=80) cout<<"C grade";
if(marks>60 && marks<=70) cout<<"D grade";
if(marks>=0 && marks<=60) cout<<"F grade";

    return 0;
}
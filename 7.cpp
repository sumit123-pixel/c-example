// Check whether a character is a vowel or consonant.

#include<iostream>

using namespace std;

int main(){
    char ch;
    cout<<"enter any alphabate:";
    cin>>ch;

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') cout<<"vowel";
  
    else {cout<<"consonent";}


    return 0;
}
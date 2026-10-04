//Take a number from the user. If it is negative, use goto to jump to an error message. Otherwise print its square.

#include<iostream>

using namespace std;

int main(){
    int a;
    cout<<"Enter a:"<<endl;
    cin>>a;

    if(a>0){
     goto square;
    }
    else{
      goto error;
    }
    error :{
    cout<<"Wrong input"<<endl;
     goto end;
}
    square:{
        cout<<a*a;
    }
    end:
       return 0;
}
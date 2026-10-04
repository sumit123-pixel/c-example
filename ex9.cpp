//number is prime or not using while loop

#include<iostream>

using namespace std;

int main(){
    int a, count=0, b=1;
   cout<<"enter a:"<<endl;
   cin>>a;

   while(b<=a){
    if(a%b==0){
        count++;
    }
    b++;
   }

   if(count==2){
    cout<<"no. is prime"<<endl;

   }
   else{
    cout<<"no. is not prime"<<endl;
   }

return 0;
}


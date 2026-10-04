//Print the sum of the first N natural numbers as the loop.

#include<iostream>

using namespace std;

int main(){
    int n, i, c=0;
    cout<<"enter n:"<<endl;
    cin>>n;

    for(i=1; i<=n; i++){

        cout<<i<<endl;
         c=c+i;
    }
      cout<<c;
    

}
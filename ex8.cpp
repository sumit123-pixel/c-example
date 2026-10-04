//factorail of number n

#include<iostream>

using namespace std;

int main(){
    int n, fact=1;
    cout<<"enter n:"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
     fact=fact*i;
    }
 cout<<fact;
}
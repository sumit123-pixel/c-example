#include <iostream>
using namespace std;

int main(){
int t,i,j;
int n;
cout<<"Enter the number of values to be sorted: ";
cin>>n;

int s[20];

cout<<"enter values in array: ";

for(i=0; i<n; i++){
    cin>>s[i];
}
cout<<endl;

cout<<"the list to be sorted is "<<endl;
for(i=0; i<n; i++){
    cout<<s[i]<<"  ";
}

for(i=0; i<n; i++){
    for(j=0; j<n-i; j++){
        if(s[j]>s[j+1]){
            t=s[j+1];
            s[j+1]=s[j];
            s[j]=t;
        }
    }
}
cout<<endl;
for(int i=0; i<n; i++){
cout<<"pass"<<i+1<<" ";

for(int k=0; k<n; k++)
{
    cout<<s[k]<<" ";
}

cout<<endl;
}
return 0;
}
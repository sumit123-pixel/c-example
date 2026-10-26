//ques. on linear search
#include <iostream>
using namespace std;

int main(){
int arr[20];
int m,n;
bool found;

cout<<"enter n:"<<endl;
cin>>n;
cout<<endl;

for(int i=0; i<n; i++){
    cin>>arr[i];
}

cout<<"entered values are"<<endl;

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

cout<<endl;

cout<<"Enter the no. which you want to find:"<<endl;
cin>>m;

for(int i=0; i<n; i++){
    if(arr[i]==m){
        cout<<"The no. is present at "<<i+1<<" position and the number is "<<arr[i];
        found= true;
    }
}

if(!found){
    cout<<"The no. is not present.";
}

return 0;
}
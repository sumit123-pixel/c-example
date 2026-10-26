#include <iostream>
using namespace std;

int main(){
   int arr[20], n, current, prev;

   cout<<"Enter n: "<<endl;
   cin>>n;

for(int i=0; i<n; i++){
    cin>>arr[i];
}

cout<<endl;

cout<<"Your entered array values are:"<<endl;

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

for(int i=1; i<n; i++){
    int current = arr[i];
    int prev= i-1;

    while(prev>=0 && arr[prev]>current){
        arr[prev+1]=arr[prev];
        prev--;
    }

    arr[prev+1]=current;
}
cout<<endl;

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

return 0;
}
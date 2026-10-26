// Modify your insertion sort program so that it sorts the array in descending order (largest first).

// Sample Input:

// 5
// 9 3 7 1 5

// Sample Output:

// 9 7 5 3 1

#include <iostream>
using namespace std;

int main(){
int arr[20], n, current, prev;

cout<<"Enter n: "<<endl;
cin>>n;

for(int i=0; i<n; i++){
    cin>>arr[i];
}

cout<<endl<<"Here the values to be sorted are:";

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}

for(int i=1; i<n; i++){
    current= arr[i];
    prev= i-1;

    while(prev>=0 && arr[prev]<current){
        arr[prev+1]=arr[prev];
        prev--;
    }
    arr[prev+1]= current;
}

cout<<endl;

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
return 0;
}
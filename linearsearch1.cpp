// Write a C++ program that:

// Takes n and then n integers into an array
// Takes a number m to search for
// Prints every position (1-based) where m appears
// Prints the total count of matches
// If m is not present, prints Not found

// Sample Input 1:

// 6
// 4 8 2 8 5 8
// 8

// Sample Output 1:

// Positions: 2 4 6
// Count: 3

#include <iostream>
using namespace std;

int main(){
   int arr[20];
   int m, n;
   int count=0;
   bool found;

   cout<<"Enter n:";
   cin>>n;

   cout<<"Enter values:"<<endl;

   for(int i=0; i<n; i++){
    cin>>arr[i];
   }

   cout<<endl<<"Entered values are:";
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }

   cout<<endl;

   cout<<"Enter m: ";
   cin>>m;
   cout<<endl;
cout<<"position:"<<endl;
   for(int i=0; i<n; i++){
      if(arr[i]==m){
        found=true;
        count++;
        cout<<i+1<<" ";
      }
   }

   cout<<endl<<"count: "<<count<<endl;
return 0;
}
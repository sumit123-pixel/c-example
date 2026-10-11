// Write a C++ program that takes n positive integers from the user. Use Bubble Sort to sort only the elements at even indices (0, 2, 4, ...) in descending order (largest to smallest). Elements at odd indices must stay exactly where they are.

// Example:

// Input: n = 7, array = [9, 4, 2, 7, 5, 1, 8]
// Elements at even indices: 9, 2, 5, 8
// Sorted descending: 9, 8, 5, 2
// Output: [9, 4, 8, 7, 5, 1, 2]

#include <iostream>
#include<utility>

using namespace std;

int main(){
   int n;

   cout<<"Enter n:"<<endl;
   cin>>n;

   int s[20];

   for(int i=0; i<n; i++){
    cin>>s[i];
   }

   cout<<"Entered values are:"<<endl;

   for(int i=0; i<n; i++){
    cout<<s[i]<<" ";
   }

   for(int i=0; i<n-1; i++){
    if(i%2==0)
    {
        for(int j=0; j<n-i-1; j++){
          swap(s[j+2], s[j]);

    }
   }
}

cout<<endl;

for(int i=0; i<n; i++){
    cout<<s[i]<<" ";
}
return 0;
}
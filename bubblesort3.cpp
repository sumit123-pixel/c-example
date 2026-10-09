// Write a C++ program that takes n positive integers from the user. Use the Bubble Sort algorithm to sort the numbers in ascending order of their last digit (the digit in the ones place).

// If two numbers have the same last digit, they should stay in their original relative order. (Hint: only swap when the left last digit is strictly greater than the right one.)

// Example:

// Input: n = 6, array = [23, 41, 15, 32, 7, 90]
// Last digits: 3, 1, 5, 2, 7, 0
// Output: [90, 41, 32, 23, 15, 7]

// Rules:

// Use plain arrays (no vector).
// Use Bubble Sort with the swapped early-exit flag.
// Print the array after every pass, like Pass 1: ....

#include <iostream>
using namespace std;

int main(){
    int n, a=0;
    bool swapped;

    cout<<"Enter the nubers you want to sort "<<endl;
    cin>>n;

    int arr[20];
    int ones[20];


    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Entered values are:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    for(int i=0; i<n-1; i++){
        bool swapped= false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]%10>arr[j+1]%10){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=true;
            }
        }
        if(!swapped) break;
    }

    cout<<endl;

    for(int i=0; i<n; i++)cout<<arr[i]<<" ";
return 0; 
}
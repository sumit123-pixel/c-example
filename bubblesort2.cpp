// Write a C++ program that takes n positive integers from the user. Use the Bubble Sort algorithm to sort only the even numbers in ascending order (smallest to largest). All the odd numbers must remain in their original positions without moving.

// Example Walkthrough:

// • Input Array: [5, 8, 3, 2, 1, 6]
// • Identified Evens: 8, 2, 6
// • Sorted Evens: 2, 6, 8
// • Expected Sorted Output: [5, 2, 3, 6, 1, 8]
// (Notice how 5, 3, and 1 did not move from indices 0, 2, and 4, while the even numbers were sorted among themselves).

#include<iostream>
#include<utility>

using namespace std;

int main(){
    int n, m=0;
    bool swapped;

    cout<<"enter no. of values you want to sort:"<<endl;
    cin>>n;
    cout<<endl;

    int s[20];
    int k[20];

    for(int i=0; i<n; i++){
        cin>>s[i];
    }

    cout<<"Entered values are:"<<endl;

    for(int i=0; i<n; i++){
        cout<<s[i]<<"  ";
    }

 for(int i=0; i<n; i++){
    if(s[i]%2==0){
        k[m]=s[i];
        m++;
    }
 }

 for(int i=0; i<m-1; i++){
    for(int j=0; j<m-i-1; j++){
        bool swapped= false;
        if(k[j]>k[j+1]){
            int temp= k[j];
            k[j]=k[j+1];
            k[j+1]=temp;
            swapped= true;
        }
        if(!swapped) break;
    }
 }

int a=0;

for(int i=0; i<n; i++){
    if(s[i]%2==0){
        s[i]=k[a];
        a++;
    }
}

cout<<endl;


for(int i=0; i<n; i++){
cout<<s[i]<<" ";
}
return 0;
}
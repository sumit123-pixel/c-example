// Write a C++ program that asks the user for n integers (which can be positive or negative). Instead of sorting them normally, sort the array based on their absolute values (their distance from zero, ignoring the negative sign) in descending order (largest absolute value first, smallest last).
// If two numbers have the same absolute value (like -5 and 5), their original relative order should be maintained (Bubble Sort handles this automatically because it is stable!).

// Example Walkthrough:

// • Input Array: [3, -9, 5, -2, 2]
// • Their Absolute Values: [3, 9, 5, 2, 2]
// • Expected Sorted Output: [-9, 5, 3, -2, 2] (or [2, -2] at the end depending on input order, since 9 is the largest absolute value, then 5, then 3, then 2).


#include <iostream>
#include<cmath>

using namespace std;

int main(){
   int n, m, i;
   cout<<"enter number n: "<<endl;
   cin>>n;

   int s[20];

   cout<<"array values are (+ or -): ";

   for(int i=0; i<n; i++){
    cin>>s[i];
   }

   for(int i=0; i<n; i++){
    cout<<s[i]<<" ";
   }

   for(int i=0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++){
        if(abs(s[j])<abs(s[j+1])){
           m=s[j];
           s[j]=s[j+1];
           s[j+1]=m;

        }
    }

   }
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
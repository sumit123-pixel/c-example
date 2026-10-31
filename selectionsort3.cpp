// Write a C++ program that:

// Takes n (assume n <= 20) and then the marks of n students into an int marks[20] array.
// Also takes each student’s roll number into an int roll[20] array.
// Sorts the students by marks in ascending order using selection sort.
// Keeps each roll number matched with its marks, so when you swap two marks, you must swap the corresponding roll numbers too.
// Prints the sorted list as Roll: X Marks: Y.


#include<iostream>

using namespace std;

int main(){
    int n, marks[20], rollno[20];

    cout<<"enter n:"<<endl;
    cin>>n;

    cout<<"enter roll number:"<<endl;

    for(int i=0; i<n; i++){
        cin>>rollno[i];
    }

    cout<<endl;
    cout<<"Enter marks:"<<endl;

    for(int i=0; i<n; i++){
        cin>>marks[i];
    }

    cout<<"students roll no and marks: "<<endl;

    for(int i=0; i<n; i++){
        cout<<"roll no." <<i+1<<" marks "<<marks[i]<<endl;  
    }

    for(int i=0; i<n-1; i++){
        int small=i;
        for(int j=i+1; j<n; j++){
            
        }
    }
    return 0;
}
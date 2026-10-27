// Input:
// n = 8
// arr = 1 2 4 4 4 4 7 9
// target = 4

// Output:
// First occurrence: 2
// Last occurrence: 5
#include<iostream>

using namespace std;

int main(){
    int n, i, mid, m, count=0;
    int arr[20];
    int save[5];
    bool found= false;

    cout<<"Enter no. n: ";
    cin>>n;

    int start=0, end=n-1;

    cout<<endl<<"Enter vales in sorted order: "<<endl;

    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"your entered values are: "<<endl;

    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"Enter the value you want to find: "<<endl;
    cin>>m;

    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==m){
            found= true;
          cout<<mid<<" ";
          count++;
        }

        else if(arr[mid]>m){
            end=mid-1;
        }

        else{
           start=mid+1;
        }
    }

    if(!found){
        cout<<" \n The no. is not present in the list."<<endl;
    }

    // for(int i=0; i<count; i++){
    // cout<<save[i];
    // }
    


    return 0;
}
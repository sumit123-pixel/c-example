#include<iostream>

using namespace std;

int main(){
    int n, i, mid, m;
    int arr[20];
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
            cout<<"The position of the number is "<<mid+1<<" and the no. is "<<m;
            found= true;
            break;
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
    


    return 0;
}
#include<iostream>

using namespace std;

int main(){
    int n, arr[20];

    cout<<"Enter number n: "<<endl;
    cin>>n;

    cout<<"Enter values:"<<endl;

   for (int i=0; i<n; i++){
    cin>>arr[i];
   }

   cout<<"Values to be sorted is:"<<endl;

   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }

   cout<<endl;

   for(int i=0; i<n-1; i++){
    int small = i;
    for(int j=i+1; j<n; j++){
        if(arr[j]<arr[small]){
            small = j;
        }
    }
   
 int temp= arr[small];
   arr[small] = arr[i];
   arr[i]=temp;
}

   cout<<endl;

   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }
    

    return 0;
}
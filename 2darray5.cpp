// diagonal sum in 2d array

#include <iostream>
using namespace std;

int main(){
int arr[3][3];
int rows=3;
int cols = 3;
int dia_sum=0;

cout<<"Enter values in array: "<<endl;

for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cin>>arr[i][j];
    }
}

cout<<"array is: "<<endl;


for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}


for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        if(i==j){
            dia_sum=dia_sum+arr[i][j];
        }

    }

}
 cout<<endl<<dia_sum;

return 0;
}
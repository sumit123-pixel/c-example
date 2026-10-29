// diagonal sum in 2d array in secondary diagonal

#include <iostream>
using namespace std;

int main(){
int arr[4][4];
int rows=4;
int cols = 4;
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
        if(i+j==rows-1){
            dia_sum=dia_sum+arr[i][j];
        }

    }

}
 cout<<endl<<dia_sum;

return 0;
}
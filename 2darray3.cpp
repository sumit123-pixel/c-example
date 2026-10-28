//linear search in 2d array

#include <iostream>
using namespace std;

int main(){
int mat[3][3];
int rows=3, cols=3;
bool found= false;

cout<<"Enter values in the 2d array: "<<endl;

for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cin>>mat[i][j];
    }
}

cout<<"Your entered 2d array is: "<<endl;

for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}

int m;
cout<<"Enter the value you want to find: "<<endl;
cin>>m;

for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        if(mat[i][j]==m){
            cout<<"The no. is found at the row "<<i+1<<" and column "<<j+1;
            found= true;
        }
    }
}

if(!found){
    cout<<"The no. is not found in the array.";
}

return 0;
}
// loops in 2d array for input

#include <iostream>
using namespace std;

int main(){
int mat[4][3];
int rows=4;
int cols=3;

cout<<"Enter values in 2d array: ";

for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cin>>mat[i][j];
    }
}


for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cout<<mat[i][j]<<" ";
    }
}

return 0;
}
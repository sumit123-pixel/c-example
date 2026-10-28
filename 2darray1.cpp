//loops in 2d array

#include <iostream>

using namespace std;

int main(){
int rows=4, columns=3;

int mat[rows][columns]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
        cout<<mat[i][j]<<" ";
    }
}

return 0;
}
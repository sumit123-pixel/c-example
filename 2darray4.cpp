//maximum row sum in 2d array

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


for(int i=0; i<rows; i++){
    int row_sum=0;
    for(int j=0; j<cols; j++){
        row_sum= row_sum+mat[i][j];
    }
    cout<<"For row "<<i+1<<" = "<<row_sum<<endl;;
}


return 0;
}
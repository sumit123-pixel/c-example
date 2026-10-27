#include <iostream>

using namespace std;

//access elements in 2d array
// 1  2  3   <--R0
// 4  5  6   <--R1
// 7  8  9   <--R2
// 10 11 12  <--R3
//  ^  ^  ^
// C0 C1 C2 

int main(){
int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

cout<<matrix[2][1];
return 0;
}
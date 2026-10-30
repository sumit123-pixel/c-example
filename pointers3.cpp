// const pointer

#include<iostream>

using namespace std;

int main(){
    int i=5;
    int *p1=&i;
    const int *p2=&i;

    cout<<"changed value of i is "<<i<<endl;

    (*p1)++;
    cout<<"changed value of i is "<<i<<endl;
    // cout<<(*p2)++;    ----> this is illegal statement
    return 0;
}
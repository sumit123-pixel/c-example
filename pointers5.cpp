//pointers arithmatic

#include <iostream>
using namespace std;

int main(){
      int arr[5]={10,20,30,40,50};
      int *p=arr;

      cout<<*p;
      cout<<endl<<*(p+1);   // lets assume the value 10 have adress 1000 and the 20 is 1004 and so on, so *(p+1) by this we not andd 1 to 1000, we add integer 1 which is of 4 byutes so this is 1004.
      cout<<"\n"<<*(p++);
      cout<<"\n"<<*(p--);
return 0;
}

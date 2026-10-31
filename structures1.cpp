// arrow(->) operator

#include <iostream>
using namespace std;

struct employees
{
    int code;
    char name[10];
    float salary;
};

int main(){
     employees e1= {010, "sumit", 120000};
     employees* ptr= &e1;
    
     cout<<(*ptr).code<<endl;   // by thius method we accessd data by pointers
     cout<<ptr->code<<endl;   // we can also use arrow intead of above method
    
return 0;
}
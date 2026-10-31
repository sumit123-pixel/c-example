//program illustrates how to inbput and output elements in a structure . Details of employees
// namely code, name and salary are given as input in the form of a structure.

#include <iostream>
using namespace std;

struct employees
{
    int code;
    char name[10];
    float salary;
};
    
int main(){
    employees e1;
    char ch;
   
    do{
        cout<<"Enter code of employee: "<<endl;
        cin>>e1.code;

        cout<<"Enter name of employee: "<<endl;
        cin>>e1.name;

        cout<<"Enter salary of employee: "<<endl;
        cin>>e1.salary;

        cout<<"Do you want to add more employees details? , Enter y or n: ";
        cin>>ch;
    }while(ch=='y');
      
return 0;
}
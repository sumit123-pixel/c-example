//; program is used for giving the details of 2 students as in the form of array of structures and displaying the details of the structure

#include <iostream>
using namespace std;

struct student
{
    int roll_no;
    char name[10];
    float fees;
}s[2];

int main(){

    for(int i=0; i<2; i++){
        cout<<"Enter roll number: "<<endl;
        cin>>s[i].roll_no;

        cout<<"Enter name of studemt: "<<endl;
        cin>>s[i].name;

        cout<<"Enter fees of student: "<<endl;
        cin>>s[i].fees;
    }

    for(int i=0; i<2; i++){
        cout<<"Roll number    name     fees"<<endl;
        cout<<s[i].roll_no<<"         "<<s[i].name<<"         "<<s[i].fees<<endl;
        }
return 0;
}
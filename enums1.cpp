// write a program for the preparation of telephone bill following the entries should be made:
//name of the customer
// address
// telephone number 
//type of telephone
// number of local calls type of telephone is enumerated type comprising of the following element 
//OYT EM MOR
// if the charges for local court is rupees to find the amount that has to be paid 

#include <iostream>
#include<string>

using namespace std;

struct telephone
{
    string name;
    string address;
    int tele_no;
    int call_no;
};
enum type{OYT=1, EM=2, OR=3};

int main(){

    telephone t1;
    type tele_type=OYT;

    cout<<"Enter name :"<<endl;
    cin>>t1.name;

    cout<<"Enter address:"<<endl;
    cin>>t1.address;

    cout<<"Enter telephone number: "<<endl;
    cin>>t1.tele_no;
    

    switch(tele_type){
        case OYT:
        cout<<"OYT type"<<endl;
        break;

        case EM:
        cout<<"EM type"<<endl;
        break;

        case OR:
        cout<<"OR type"<<endl;
        break;
    }


    cout<<"Enter no. of calls:"<<endl;
    cin>>t1.call_no;

     cout<<"Amount that has to be pay: "<<(t1.call_no)*2;

return 0;
}
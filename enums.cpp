//Enumerated data type:- A user defined data type that consists of pair
//named integer constants
#include <iostream>
#include<string>

enum Day{sunday=0, monday=1, tuesday=2, wednesday=3, thrusday=4, friday=5, saturday=6};

using namespace std;

int main(){
    // string today= "sunday";

    // switch(today){
    //     case "sunday":
    //     cout<<"This is sunday!";
    //     break;
    // case "monday":
    //     cout<<"This is monday!";
    //     break;
    //     case "tuesday":
    //     cout<<"This is tuesday!";
    //     break;
    //     case "wednesday":
    //     cout<<"This is wednesday!";
    //     break;
    //     case "thrusday":
    //     cout<<"This is thrusday!";
    //     break;
    //     case "friday":
    //     cout<<"This is friday!";
    //     break;
    //     case "saturday":
    //     cout<<"This is saturday!";
    //     break;
    // }
    //-------------> THIS SHOWS ERROR BECAUSE SWITCH CASE NOT WORK WITH STRINGS, FOR THIS WE USE ENUMS
    // FOR USING ENUMS WE DON;T HAAVE TO USE STRING.

    Day today=sunday;

      switch(today){
        case sunday:
        cout<<"This is sunday!";
        break;
    case monday:
        cout<<"This is monday!";
        break;
        case tuesday:
        cout<<"This is tuesday!";
        break;
        case wednesday:
        cout<<"This is wednesday!";
        break;
        case thrusday:
        cout<<"This is thrusday!";
        break;
        case friday:
        cout<<"This is friday!";
        break;
        case saturday:
        cout<<"This is saturday!";
        break;
    }


return 0;
}
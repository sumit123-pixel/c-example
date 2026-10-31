// program input the details of products namely product number, product name, cost price, selling price
// it also displays the details of the products

#include <iostream>
using namespace std;
   
struct product
{
    int product_number;
    char product_name[10];
    float cost_price;
    float selling_price;
};

int main(){

    product p1;

    for(int i=0; i<3; i++){
        
        cout<<"Enter product number: "<<endl;
        cin>>p1.product_number;

        cout<<"Enter product name: "<<endl;
        cin>>p1.product_name;

        cout<<"Enter cost price: "<<endl;
        cin>>p1.cost_price;

        cout<<"Enter selling price: "<<endl;
        cin>>p1.selling_price;

        cout<<"product number: "<<p1.product_number<<endl;
        cout<<"product name: "<<p1.product_name<<endl;
        cout<<"product cost price: "<<p1.cost_price<<endl;
        cout<<"product selling price: "<<p1.selling_price<<endl;

    }

return 0;
}
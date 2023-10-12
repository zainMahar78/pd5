#include<iostream>
using namespace std;
float taxCalculator(char type, double price);
main(){
    char code;
    cout<<"Enter the vehicle type code (M, E, S, V, T):" ;
    cin>>code;
    cout<<"Enter the price of the vehicle: $";
    double price;
    cin>>price;
    float result;
    result=taxCalculator(code,price);
    cout<<"The final price of a vehicle of type "<<code<<" after adding the tax is $"<<to_string(result)<<".";
}
float taxCalculator(char type, double price){
    double taxamount, taxrate, finalprice;
    if(type=='M'){
    taxamount=price*(0.06);
    finalprice=price+taxamount;
    return finalprice;
    }
    if(type=='E'){
    taxamount=price*(0.08);
    finalprice=price+taxamount;
    return finalprice;
    }
    if(type=='S'){
    taxamount=price*(0.1);
    finalprice=price+taxamount;
    return finalprice;}
    if(type=='V'){
    taxamount=price*(0.12);
    finalprice=price+taxamount;
    return finalprice;
}   
    if(type=='T'){
    taxamount=price*(0.15);
    finalprice=price+taxamount;
    return finalprice;
        }
    return 0.0;
    }
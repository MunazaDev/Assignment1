#include<iostream>
using namespace std;
main()
{
    string country;
    cout<<"enter country name ";
    cin>>country;
    int ticketprice=1000;
    int discount1=ticketprice*5/100;
    int discount=ticketprice*10/100;
    int payable=ticketprice-discount1;
    int payable2=ticketprice-discount;
    if(country=="ireland")
    cout<<"price ofter discount "<<payable;
    else
    cout<<"price after discount "<<payable2;

}
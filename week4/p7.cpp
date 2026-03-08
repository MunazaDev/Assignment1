#include <iostream>
using namespace std;
int main() {
int amount;
float percent_1,percent_2;
float discount_1,discount_2;
cout<<"Enter the amount";
cin >> amount;
percent_1=amount*0.05;
percent_2=amount*0.1;
discount_1= amount-percent_1;
discount_2= amount-percent_2;

if (amount<=5000){
cout<<"the discount is"<<discount_1;
}
else{
cout<<"the discount is"<<discount_2;
}
}
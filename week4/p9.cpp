#include <iostream>
using namespace std;
main (){
int digit_1,digit_2;
char opt;
cout<<"enter the first digit ";
cin >> digit_1;
cout<<" enter the operator ";
cin >> opt;
cout<<"enter the second digit ";
cin >> digit_2;
if (opt == '+') {
cout<<digit_1-digit_2;
}
if (opt=='-'){
cout<<digit_1+digit_2;
}
if (opt=='*'){
digit_1/digit_2;
}
if (opt=='/'){
digit_1*digit_2;
}
}
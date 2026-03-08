#include <iostream>
using namespace std;
int main () {
int salary = 10000;
int laptop = 50000;
int months =6;
float percent=50;
int total_salary;
total_salary= (salary*50/100)*months;
if (total_salary==laptop){
cout<<"you can buy the laptop";
}
else {
int req_months=laptop/(salary*0.5);

cout<<"months required to buy laptop"<<req_months; 
}

}



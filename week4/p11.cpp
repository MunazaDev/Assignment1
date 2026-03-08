#include <iostream>
using namespace std;
main() {
string name_1,name_2,name_3;
int age_1,age_2,age_3;
cout<<" enter first name ";
cin >> name_1;
cout<<" enter second name ";
cin >> name_2;
cout<<" enter third name ";
cin >> name_3;
cout<<" enter first age ";
cin >> age_1;
cout<<" enter second age ";
cin >> age_2;
cout<<" enter third age ";
cin >> age_3;
if(age_1>age_2)
{
    if(age_1>age_3)
    cout<<name_1<<" is the youngest";
}
if(age_2>age_3){
    if(age_2>age_1)
    cout<<name_2<<" is the youngest brother";
}
if(age_3>age_1){
    if(age_3>age_2)
    cout<<name_3<<" is the youngest brother";
}

}


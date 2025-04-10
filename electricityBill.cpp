/*
use if else to calculate bill with slabs
0-100 units 1rs/unit
101-200 units 2rs/unit
201-300 units 3rs/unit
above 300 units 5rs/unit
*/

#include<iostream>
using namespace std;

int main(){
int unit,bill;
cout<<"Enter the unit : ";
cin>>unit;
if(unit>=0 && unit<=100){
    bill = unit * 1;
}
else if(unit>=101 && unit<=200){
    bill = 100 + (unit-100) * 2;
}
else if(unit>=201 && unit<=300){
    bill = 300 + (unit-200) * 3;
}
else if(unit>=301){
    bill = 600 + (unit-300) * 5;
}
else{
    cout<<"invalid electricity unit"<<endl;
    return 0;
}
cout<<"The bill amount is "<<bill<<endl;
return 0;
}

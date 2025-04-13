#include<iostream>
using namespace std;

int main(){
int side1,side2,side3;
cout<<"Enter all three sides of triangle ";
cin>>side1 >> side2 >>side3;

if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2) {
    if(side1 == side2 && side2 == side3){
        cout<<"Given triangle is equilateral"<<endl;
    }
    else if(side1 == side2 || side2 == side3 || side3 == side1){
        cout<<"Given triangle is isosceles"<<endl;
    }
    else{
        cout<<"Given triangle is scalene"<<endl;
    }
}
else{
    cout<<"The given sides do not form a valid triangle"<<endl;
}
return 0;
}

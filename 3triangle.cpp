/*
This program checks the type of triangle based on the lengths of its three sides.

Steps:
1. It takes three integer inputs: side1, side2, and side3.
2. First, it checks whether the given sides can form a valid triangle
   using the triangle inequality theorem:
   - sum of any two sides must be greater than the third side.
3. If valid, it checks the type of triangle:
   - If all three sides are equal → Equilateral Triangle
   - If any two sides are equal → Isosceles Triangle
   - If all sides are different → Scalene Triangle
4. If not valid, it prints that the sides do not form a triangle.
*/


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

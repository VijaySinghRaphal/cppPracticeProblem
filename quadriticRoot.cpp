/*
if discriminant is zero both roots are equal.
if discriminant is greater than zero roots are real and different.
if discriminant is less than zero roots are imaginary no solution.
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
int a,b,c,d;
float r1,r2;
cout<<"Enter the value of coffecient a,b,c : ";
cin>> a >> b >> c;
d = (b*b)-4*a*c; // calculate the discriminant

if(d == 0){
    cout<<"Both roots are equal"<<endl;
    r1 = -b/(2.0 * a);
    cout<<"Value of both roots = "<<r1<<endl;
}
else if(d > 0){
    cout<<"Both roots are different and real"<<endl;
    r1 = (-b+sqrt(d))/(2.0*a);
    r2 = (-b-sqrt(d))/(2.0*a);
    cout<<"Value of root 1 = "<<r1<<endl;
    cout<<"Value of root 2 = "<<r2<<endl;
}
else{
    cout<<"Roots are imaginary no solution"<<endl;
}
return 0;
}


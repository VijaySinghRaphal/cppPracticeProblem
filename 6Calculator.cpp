/*
Program: Simple Calculator using Switch Case in C++
---------------------------------------------------
This program takes two integer numbers and a mathematical operator (+, -, *, /) as input from the user.
Based on the operator entered, it performs the corresponding arithmetic operation using a switch statement.

Features:
- Supports addition, subtraction, multiplication, and division.
- Handles division by zero error.
- Displays appropriate message for invalid operators.
*/


#include<iostream>
using namespace std;

int main(){
char ch;
float num1, num2;
cout<<"Enter the first number ";
cin>>num1;
cout<<"Enter the operator (+ , - , * , /) ";
cin>>ch;
cout<<"Enter the second number ";
cin>>num2;

switch(ch){
    case '+':
        cout<<"The addition is = "<<num1+num2<<endl;
        break;
    case '-':
        cout<<"The subtraction is = "<<num1-num2<<endl;
        break;
    case '*':
        cout<<"The multiplication is = "<<num1*num2<<endl;
        break;
    case '/':
        if(num2 == 0){
            cout<<"Can't divide be zero"<<endl;
        }
        else{
            cout<<"The division is = "<<num1/num2<<endl;
        }
        break;
    default:
        cout<<"Invalid operation"<<endl;
}
return 0;
}

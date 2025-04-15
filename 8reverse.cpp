/*
Program: Reverse an Integer with Overflow Handling in C++
--------------------------------------------------------
This program takes an integer number as input and reverses its digits.
It handles integer overflow using conditions based on the maximum and minimum values of integers.
If the reversed number overflows, it resets the reversed number to zero and notifies the user.

Features:
- Reverses the digits of a given integer.
- Handles potential integer overflow while reversing (using INT_MAX and INT_MIN).
- Displays an error message if the number cannot be reversed due to overflow.
*/

#include<iostream>
#include<climits>
using namespace std;

int main(){
int num,rev=0;
cout<<"Enter the number ";
cin>>num;
while(num > 0){
    int mod = num % 10;
    if((rev > INT_MAX/10 ) || (rev < INT_MIN/10)){
        rev = 0;
    }
    rev = rev * 10 + mod;
    num = num/10;
}
if(rev == 0){
    cout<<"Cannot reverse the given number "<<endl;
}
else{
    cout<<"The reverse of a number is "<<rev<<endl;
}
return 0;
}

/*
Program: Count the Number of Digits in a Number using While Loop in C++
------------------------------------------------------------------------
This program takes an integer number as input from the user and counts the number of digits in that number.
It uses a while loop to repeatedly divide the number by 10 until the number becomes zero,
incrementing the counter on each iteration.

Features:
- Handles input numbers of any size.
- Provides the correct number of digits in a given integer.
- Includes handling for the edge case where the input is zero (which has 1 digit).
*/

#include<iostream>
using namespace std;

int main(){
    // Declare variables: 'num' to store the input number and 'c' to count the number of digits
    int num, c = 0;

    // Prompt the user to enter a number
    cout << "Enter the number: ";
    cin >> num;

    // Check if the number is zero (since zero has 1 digit)
    if (num == 0) {
        c = 1;  // If the input number is 0, we know it has 1 digit
    } else {
        // Loop to count the number of digits in the input number
        while(num > 0){
            c++;        // Increment the counter for each digit
            num = num / 10;

#include<iostream>
using namespace std;

int main(){
int num, c=0;
cout<<"Enter the number ";
cin>>num;
if (num == 0) {
        c = 1;
}
else {
    while(num > 0){
        c++;
        num = num / 10;
    }
}
cout<<c<<" digits are present in given number "<<endl;
return 0;
}

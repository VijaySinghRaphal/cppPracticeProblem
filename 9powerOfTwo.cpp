/*
Program: Check if a Number is a Power of 2
-------------------------------------------
Steps:
1. Prompt the user to input an integer.
2. Start from 1 (which is 2^0) and multiply by 2 in each iteration.
3. Compare the result with the user’s input number.
4. If a match is found, output that the number is a power of 2.
5. If no match is found after the loop, output that the number is not a power of 2.

*/


#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    bool isPowerOfTwo = false;
    int power = 1;
    while (power <= num) {
        if (power == num) {
            isPowerOfTwo = true;
            break;
        }
        power *= 2;
    }

    if (isPowerOfTwo) {
        cout << "It is the power of 2" << endl;
    } else {
        cout << "It is not the power of 2" << endl;
    }

    return 0;
}

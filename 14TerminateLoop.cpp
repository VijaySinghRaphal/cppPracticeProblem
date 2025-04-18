// Program to repeatedly divide a number by 2 using right shift operator
// and print the result at each step.

#include<iostream>
using namespace std;

int main(){
    int num = 25;
    while(num > 0){
        cout<<num<<endl;
        num = num >> 1;
    }
return 0;
}

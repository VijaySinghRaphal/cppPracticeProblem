// Program to check whether a given number is a power of two
// using bitwise operations.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number ";
    cin>>num;
    if((num & (num-1)) == 0){
        cout<<"Number is power of two"<<endl;
    }
    else{
        cout<<"Number is not power of two"<<endl;
    }
return 0;
}

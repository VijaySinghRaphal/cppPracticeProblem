// Program to check whether a number is even or odd using bitwise
// AND operation.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number ";
    cin>>num;
    if(num & 1){
        cout<<"number is odd"<<endl;
    }
    else{
        cout<<"number is even"<<endl;
    }
return 0;
}

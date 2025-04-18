// Program to count the total number of set bits (1s) in the binary representation
// of a given integer


#include<iostream>
using namespace std;

int main(){
    int c = 0;
    int num;
    cout<<"Enter the number ";
    cin>>num;
    while(num >0){
        int bit = num & 1;
        if(bit == 1){
            c++;
        }
        num = num >> 1;
    }
    cout<<"Total set bit in a number is "<<c<<endl;
return 0;
}

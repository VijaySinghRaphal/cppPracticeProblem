/*
extract each digit from the number and build it back into the same sequence, not reverse the number.
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
int num,seq=0,i=0;
cout<<"Enter the number ";
cin>>num;
while(num > 0){
    int mod = num % 10;
    seq = mod*pow(10,i) + seq;
    num = num / 10;
    i++;
}
cout<<"The sequence is "<< seq<<endl;
return 0;
}

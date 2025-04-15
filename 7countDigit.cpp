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

/*
This program accepts a single character input from the user
and classifies it based on its ASCII value as:

1. Capital Letter     (A-Z)
2. Small Letter       (a-z)
3. Digit              (0-9)
4. Special Symbol     (punctuation and other symbols)

If the input doesn't fall into any of these categories,
the program outputs a message indicating an invalid character.
*/


#include<iostream>
using namespace std;

int main(){
char ch;
cout<<"Enter the character ";
cin>>ch;

if(ch >= 65 && ch <= 90){
    cout<<"Capital Letter"<<endl;
}
else if(ch >= 97 && ch <= 122){
    cout<<"Small Letter"<<endl;
}
else if(ch >= 48 && ch <= 57){
    cout<<"Digit"<<endl;
}
else if((ch >= 32 && ch <=47) || (ch >= 58 && ch <=64) || (ch >=91 && ch <= 96) || (ch >=123 && ch <= 126)){
    cout<<"Special Symbol"<<endl;
}
else{
    cout<<"Enter a valid character"<<endl;
}
return 0;
}

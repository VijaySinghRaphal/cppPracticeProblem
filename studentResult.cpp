/*
    Result classification is based on the percentage:

    - If percentage >= 75 and <= 100 : Result is "Excellent"
    - If percentage >= 60 and < 75   : Result is "First class"
    - If percentage >= 40 and < 60   : Result is "Pass"
    - If percentage >= 0 and < 40    : Result is "Fail"

    Note:
    - Student must score at least 40 marks in **each subject** to be considered as passed.
    - If any subject has marks < 40, the student is considered "Fail" regardless of percentage.
    - Marks must be between 0 and 100 for each subject; otherwise input is considered invalid.
*/


#include<iostream>
#include<string>
using namespace std;

int main(){
int id;
string name;
float physics,chemistry,maths,english,hindi;
float total,percentage;

cout<<"Enter student id ";
cin>>id;
cout<<"Enter student (first) name ";
cin>>name;
cout<<"Enter physics marks ";
cin>>physics;
cout<<"Enter chemistry marks ";
cin>>chemistry;
cout<<"Enter maths marks ";
cin>>maths;
cout<<"Enter english marks ";
cin>>english;
cout<<"Enter hindi marks ";
cin>>hindi;

if ((physics < 0 || physics > 100) ||
        (chemistry < 0 || chemistry > 100) ||
        (maths < 0 || maths > 100) ||
        (english < 0 || english > 100) ||
        (hindi < 0 || hindi > 100)) {
        cout << "Invalid marks. Please enter marks between 0 and 100." << endl;
        return 0;
    }

if(physics >= 40 && chemistry >= 40 && maths >= 40 && english >= 40 && hindi >=40){
    total = physics + chemistry + maths + english + hindi;
    percentage = total / 5;

    string result;
    if(percentage >= 75 && percentage <= 100){
        result = "Excellent";
    }
    else if(percentage >= 60 && percentage < 75){
        result = "First class";
    }
    else if(percentage >= 40 && percentage < 60){
        result = "Pass";
    }
    else if(percentage >= 0 && percentage < 40){
        result = "Fail";
    }
    else{
        result = "Invalid Result";
    }

    cout<<"ID\tNAME\tPHYSICS\tCHEMSITRY\tMATHS\tENGLISH\tHINDI\tTOTAL\tPERCENTAGE\tRESULT"<<endl;
    cout<<id<<"\t"<<name<<"\t"<<physics<<"\t"<<chemistry<<"\t"<<maths<<"\t"<<english<<"\t"<<hindi<<"\t"<<total<<"\t"<<percentage<<endl;
}
else{
    cout << "Result: Fail (Student failed in one or more subjects)" << endl;
}
return 0;
}

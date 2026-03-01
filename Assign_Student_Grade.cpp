//pass fail check
#include<iostream>
using namespace std;
int main(){
int marks;
char grade;
    cout<<"Enter your Achiving Marks In the Exam=";
    cin>>marks;
    grade =marks>=90?'A':
    marks<90&&marks>=80?'B':
    marks<80&&marks>=70?'C':
    marks<70&&marks>=60?'D':
    'F';
    cout<<"Grade is="<<grade;



}

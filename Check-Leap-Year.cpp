#include<iostream>
using namespace std;
int main(){
int year;
string result;
    cout<<"Enter Year=";
    cin>>year;
result= (year%4==0)?"Leap-Year":"Not-Leap-Year";
cout<<result;

}
#include<iostream>
using namespace std;
int main(){
float passingpercentage,percentage,marks,totalmarks,mpercentage;
string condition;
cout<<"Enter Your Total Marks=";
cin>>totalmarks;
cout<<"Enter Your Obtain Marks=";
cin>>marks;
cout<<"Passing Percentage=";
cin>>passingpercentage;
percentage=((totalmarks/100)*passingpercentage);
mpercentage=((marks/totalmarks)*100);
condition=(mpercentage>=passingpercentage)?"Pass": "Fail";
                                  cout<<"Youu are"<<" "<<condition;   
                                  cout<<endl;
                                  cout<<mpercentage;



}
#include<iostream>
using namespace std;
int main(){
	int r,divd,div;
	int i=div;
	cout<<"Enter Divid";
	cin>>divd;
	cout<<"Enter Divi";
	cin>>div;
//
//	for(int i=div;divd/i>0;i=div){
//		r=divd/div;
//		divd=div;
//		div=r;
//
//	}
while(divd/i>0){
		r=divd/div;
		divd=div;
	    div=r;
     	i=div;
}
	cout<<div<<"is GCD";
}


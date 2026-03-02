#include<iostream>
using namespace std;
int main(){
	int r,divd,div;
	cout<<"Enter Divid";
	cin>>divd;
	cout<<"Enter Divi";
	cin>>div;

	for(int i=div;divd/i>0;i=div){
		r=divd/div;
		divd=div;
		div=r;

	}
	cout<<div<<"is GCD";
}


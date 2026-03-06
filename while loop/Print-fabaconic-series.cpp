#include<iostream>
using namespace std;
int main(){
	int e,n=0;
	int a=0,b=1;
	cout<<"Enter a Number to Required Series=";
	cin>>e;
	while(n<=e){
		cout<<a<<" ";
		int next=a+b;
		a=b;
		b=next;
		n++;
		
	}
	
	
	
}

#include<iostream>
using namespace std;
int main(){
int e,v,n=1;
cout<<"Enter a Check Multiple Number=";
cin>>e;
while(n<=100){
	if(n%e==0){
		v++;
	}
	n++;
	
}
cout<<"total multiple of"<<e<<"is "<<v;
}

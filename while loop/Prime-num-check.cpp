#include<iostream>
using namespace std;
int main(){
int e,n=2;
bool ch=false;
cout<<"Enter a Number=";
cin>>e;
while(n<e){
	if(e%n==0){
		ch=true;
		break;
	}
	n++;
}
if(ch==true)
cout<<e<<"  is Not-Prime value";
else
cout<<e<<"  is  Prime value";


}

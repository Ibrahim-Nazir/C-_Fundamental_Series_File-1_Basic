#include<iostream>
using namespace std;
int main(){
int n;
bool ch= false;
cout<<"Enter a Number=";
cin>>n;
for(int i=2;i<n;i++){
	if(n%i==0){
	
	ch=true;
	break;}
}
if(ch==true)
cout<<n<<"Not-Prime";
else
cout<<n<<"Prime";
}


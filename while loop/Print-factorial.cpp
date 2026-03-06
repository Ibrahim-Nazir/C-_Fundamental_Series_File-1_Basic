#include<iostream>
using namespace std;
int main(){
int n=1,fact=1,e;
cout<<"Enter a Factoreal Number= ";
cin>>e;
while(n<=e){
	fact=fact*n;
	n++;
	
}
cout<<fact;
}

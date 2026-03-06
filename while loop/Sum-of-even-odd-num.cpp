#include<iostream>
using namespace std;
int main(){
	int n=1,e;
	int sume=0,sumo=0;
	cout<<"Entera Number=";
	cin>>e;
	while(n<=e){
		if(n%2==0){
		
		cout<<"  "<<n<<" Even"<<endl;
		sume=sume+n;}
		else{
		
		cout<<"  "<<n<<" Odd"<<endl;
			sumo=sumo+n;
	}
		n++;
	}
	
	cout<<"Sum of Even Number=  "<<sume<<endl;
		cout<<"Sum of Odd Number=  "<<sumo;
	
}

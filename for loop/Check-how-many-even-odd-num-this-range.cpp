#include<iostream>
using namespace std;
int main(){
	int n,a;
	int sume=0,sumo=0;
	cout<<"Enetr a Number-";
	cin>>n;
	for(a=1;a<=n;a++){
		if(a%2==0){
			sume+=a;
		}
		else{
			sumo+=a;
		}
		
}
cout<<"Sum of Even Numbers="<<sume<<endl;
cout<<"Sum of Odd Numbers="<<sumo;
	
	
}

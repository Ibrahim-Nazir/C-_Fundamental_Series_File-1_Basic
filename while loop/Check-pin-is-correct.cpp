#include<iostream>
using namespace std;
int main(){
	int pin=2005,pinen,a=2,n=1;
	bool ch=false;
	while(n<=3){
		cout<<"Enter a Pin="<<" ";
		cin>>pinen;
		if(pinen==pin){
			ch=true;
	     	break;
	     	
		}
		
		else{
		cout<<"Your Pin is not Correct"<<endl;
		cout<<"Remaning "<<" "<<a<<" "<<"trys"<<endl;
		 a--;
	}
		
		n++;
		
	}
		if(ch==true){
	     	cout<<"Your Pin is Correct";
		}
		else
		cout<<"Invalid Pin Enter Due to Reason Account Temporary Block";
		
	
	}

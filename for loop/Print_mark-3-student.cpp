#include<iostream>
using namespace std;
int main(){
	bool fales;
	int s1,s2,s3,n;
	bool ch=true;
	cout<<"Enter a First student marks=";
	cin>>s1;
		cout<<"Enter a Second student marks=";
	cin>>s2;
		cout<<"Enter a Third student marks=";
	cin>>s3;
	for(n=1;n<=6;n++){
		if(n==1){
			if(s1>s2&&s1>s3)
			cout<<"First Student has highest Marks="<<s1;
		
			
		}
			else if(n==2){
			if(s2>s1&&s2>s3)
			cout<<"Second Student has highest Marks="<<s2;
			
			
		}
			else if(n==3){
			if(s3>s1&&s3>s2)
			cout<<"Third Student has highest Marks="<<s3;
			}
			else if(n==4){
				if(s1==s2)
				cout<<"Student First and Second Number are Same="<<s1;
			}
	else if(n==5){
				if(s3==s2)
				cout<<"Student Third and Second Number are Same="<<s2;
			}
				else if(n==6){
				
				cout<<"All Student Number Same="<<s1;
			}

		
	}
	
	
	
}

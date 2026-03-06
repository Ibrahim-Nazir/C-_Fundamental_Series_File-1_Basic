#include<iostream>
using namespace std;
int main(){
int n=1;
int square,sum=0;
while(n<=20){
	if(n%n==0){
		square=n*n;
		cout<<"Perfect Square is"<<" "<<n<<"*"<<n<<"="<<square;
		sum=sum+square;
        cout<<endl;
		
	}
	n++;
}
cout<<sum;
		
	}
	

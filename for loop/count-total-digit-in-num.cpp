#include<iostream>
using namespace std;
int main(){
	int n,c,sum=0;
	cout<<"Enter a Number=";
	cin>>n;
	for(int i=n; i>=1;i/=10)
	{
		int c=0;
		int d=i%10;
		cout<<d<<endl;
		c=c++;
		
	}
	cout<<c;

	
}

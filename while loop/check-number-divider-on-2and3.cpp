#include<iostream>
using namespace std;
int main(){
	int n=1,a=0,b=0;
while(n<=100){
	if(n%2==0){
		cout<<"Dividing on 2"<<" "<<n<<endl;
		a++;
	}
		if(n%3==0){
		cout<<"Dividing on 3"<<" "<<n<<endl;
		b++;
	}
	n++;
}
        cout<<endl;
		cout<<a<<" "<<"Number id diving on 2"; cout<<endl;
		cout<<b<<" "<<"Number id diving on 3";
	
	}

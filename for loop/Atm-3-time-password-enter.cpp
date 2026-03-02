#include<iostream>
using namespace std;
int main(){
    int n,t=2;
    int curbal,entbal;
curbal=25000;
   bool ch=true;
int userpass=2005,enteruserpass;
for(n=1;n<=3;n++){
cout<<"Enter a Password=";
cin>>enteruserpass;
if(enteruserpass==userpass){
    ch=true;
break;

}

else{
    cout<<"Invalid Password"<<endl;
    cout<<"Remaning  "<<t<<" trys"<<endl;
    t--;
}
}
if(ch==true)
cout<<"Password is Correct"<<"\n";
cout<<endl;
cout<<"Enter Widraw Amount=";
	cin>>entbal;
	if(curbal>=entbal){
		cout<<"Recive Money";
	}
	else{
		cout<<"Your Account Ballance is Minimum";
	}
}
#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a Number=";
cin>>n;
for(int i=1;i<=n;i++){
	if(i%5==0){ 
        continue;
	}
	
        cout << i << " ";
}
}

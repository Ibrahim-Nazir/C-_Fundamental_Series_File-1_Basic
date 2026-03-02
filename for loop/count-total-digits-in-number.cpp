#include<iostream>
using namespace std;
int main(){
 int mn,dn,s,n;
 cout<<"Enter a maximum Number to chech = ";
 cin>>mn;
 cout<<endl;
 cout<<"Enter a divider of Number=";
cin>>dn;
for(n=1;n<=mn;n++){
if(n%dn==0){
    s++;
}
}
cout<<"Total Number is"<<s;

}
//#include<iostream>
//using namespace std;
//int main(){
// int n,s=0,r=0;
// for(n=1;n<=100;n++){
//if(n%2==0&&n%3==0){
//    s++;
//}
//
//
//
// }
// cout<<s<<endl;
// 
//
//
//
//
//}
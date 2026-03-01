#include<iostream>
using namespace std;
int main(){
char month;
cout<<"Eneter a First Character of Month Name=";
cin>>month;

string monthname=(month=='j'||month=='J')?"January":
                 (month=='F'||month=='f')?"Febrary":
                (month=='m'||month=='M')?"March":
                (month=='a'||month=='A')?"April":
                (month=='e'||month=='E')?"May":
                (month=='j'||month=='J')?"June":
                (month=='u'||month=='U')?"July":
                (month=='g'||month=='G')?"August":
                (month=='S'||month=='s')?"Sptrember":
                (month=='O'||month=='o')?"October":
                (month=='N'||month=='n')?"November":
                (month=='d'||month=='D')?"Dember":
                      "Invalid Character Enter";
cout<<"The month Name is="<<monthname;



}

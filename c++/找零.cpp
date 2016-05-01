#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a,b,c,d,e,f;
a=n/100;
b=(n-a*100)/50;
c=(n-a*100-b*50)/20;
d=(n-a*100-b*50-c*20)/10;
e=(n-a*100-b*50-c*20-d*10)/5;
f=n-a*100-b*50-c*20-d*10-e*5;
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
cout<<d<<endl;
cout<<e<<endl;
cout<<f<<endl;
return 0;
} 

#include <iostream>
using namespace std;
int main (){
int a=0,b=0,d=0;
char c;
cin>>a>>b>>c;
if(b==0&&c=='/'){
cout<<"Divided by zero!"<<endl;
return 0;}
else if(c!='+'&&c!='-'&&c!='*'&&c!='/'){
cout<<"Invalid operator!"<<endl;
return 0;}
switch(c){
case'+':d=a+b;break;
case'-':d=a-b;break;
case'*':d=a*b;break;
case'/':d=a/b;break;
}
cout<<d<<endl;
return 0;
}

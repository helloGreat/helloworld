#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int y=0,m=0,d=0;
char c='-';
cin>>y>>c>>m>>c>>d;
if(m==1||m==3||m==5||m==7||m==8||m==10)
{
  if(d==31){
m++;d=1;}
else
 d++;
}
if(m==12)
{
  if(d==31){
y++;d=1;m=1;}
else
d++;
}
if(m==2)
{
 if(y%400==0||y%4==0&&y%100!=0){
            if (d==29){
                 m=3;d=1;}
        else 
            d++;
}
else{ 
         if (d==28){
            m=3;d=1;}
        else
          d++;
}
}
if(m==4||m==6||m==9||m==11)
{
  if(d==30){
m++;d=1;}
else
d++;
}

cout<<y<<c<<setfill('0')<<setw(2)<<m<<c<<setfill('0')<<setw(2)<<d<<endl;
return 0;
}

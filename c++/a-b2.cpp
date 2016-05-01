#include <iostream>
using namespace std;
int main (){
int max=1,min=100;
int l=0,r=0;
for (int i=0;i<6;i++)
{
int a[i];
cin>>a[i];
 if(a[i]>100)break;
 if(a[i]%2==1){
     l++;}
        else{
     r++;}
  if(a[i]%2==1&&a[i]>max){
             max=a[i];}
       else if(a[i]%2==0&&a[i]<min){
             min=a[i];}
}
if(l==6||r==6){
cout<<"你至少得输入一个奇数和偶数"<<endl;}
else if ((max-min)>0){
cout<<max-min<<" "<<endl;}
else if ((min-max)>0){
cout<<min-max<<" "<<endl;
}
 
return 0;
}


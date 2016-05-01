#include <iostream>
using namespace std;
int main (){
int max=1,min=100;
for (int i=0;i<6;i++){
int a[i];
cin>>a[i];
if(a[i]%2==1&&a[i]>max){
max=a[i];}
else if(a[i]%2==0&&a[i]<min){
min=a[i];}
}
if ((max-min)>0){
cout<<max-min<<" "<<endl;}
else{
cout<<min-max<<" "<<endl;
}
 
return 0;
}


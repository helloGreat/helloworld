#include <iostream>
using namespace std;
int main (){ 
int n=0,a[15001],i,temp,b[15000],c[15000],count=0;
while (cin>>n){
if(n==0)
break;
   for (int i=0;i<n;i++){
	cin>>a[i];}
for(int i=0;i<(n/2)+1;i++){
for(int j=i;j<n;j++){
if(a[j]>a[i]){
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
if(n%2==0)
b[count]=(a[n/2]+a[n/2-1])/2;
else{
b[count]=a[(n-1)/2];}
count++;
}
for(int i=0;i<count;i++)
cout<<b[i]<<endl;
return 0;
}

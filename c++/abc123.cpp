#include <iostream>
#include <iomanip>
using namespace std;
int main (){
float a[100],b[100],c[100],sum[3],sum1=0, suma=0,sumb=0,sumc=0;int n=0,ID=0;
char A[100],B[100],C[100];
for(int j=0;j<3;j++){
cin>>ID>>n;
for(int i=0;i<n;i++){
cin>>A[i]>>a[i];
sum1=sum1+a[i];
sum[j]=sum1;
if(A[i]=='A')
suma=suma+a[i];
if(A[i]=='B')
sumb=sumb+a[i];
if(A[i]=='C')
sumc=sumc+a[i];
}
}
cout<<'1'<<' '<<fixed<<setprecision(2)<<sum[0]<<endl;
cout<<'2'<<' '<<fixed<<setprecision(2)<<sum[1]-sum[0]<<endl;
cout<<'3'<<' '<<fixed<<setprecision(2)<<sum[2]-sum[1]<<endl;
cout<<'A'<<' '<<fixed<<setprecision(2)<<suma<<endl;
cout<<'B'<<' '<<fixed<<setprecision(2)<<sumb<<endl;
cout<<'C'<<' '<<fixed<<setprecision(2)<<sumc<<endl;
return 0;
}

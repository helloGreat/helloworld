#include <iostream>
using namespace std;
int main (){
int i,j,k,n,a[1000],sum;
cin>>n>>k;
for(i=0;i<n;i++){
cin>>a[i];
}
j=0;
i=0;
for(i=0;i<n;i++){
for (j=i+1;j<n;j++){
    sum=a[i]+a[j];
if(sum==k){
cout<<"yes"<<endl;
return 0;}
}
}
cout<<"no"<<endl;
return 0;
}

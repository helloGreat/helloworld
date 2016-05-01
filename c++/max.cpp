#include <iostream>
using namespace std;
int main ()
{
int n,a[99];
cin>>n;
for (int i=0;i<n;i++) {
cin>>a[i];
}
for (int j=1;j<n;j++){
if (a[j-1]>a[j]){
int temp=a[j-1];
a[j-1]=a[j];
a[j]=temp;
}
}
cout<<a[n-1]<<" "<<endl;
return 0;
}



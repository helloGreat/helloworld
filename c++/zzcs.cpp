#include <iostream>
using namespace std;
int main(){
int n, i;
cin>>n;
for(i=10;i<=n;i++){
int a,b;
a=i/10;b=i%10;
if(i%(a+b)==0)
cout<<i<<endl;
}
return 0;
}

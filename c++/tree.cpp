#include <iostream>
using namespace std;
int main ()
{
int a[10001]={0};
int M=0,L=0,count=0;
int i=0,j=0;
cin>>L>>M;
for(int b=0;b<M;b++){
cin>>i>>j;
    while(i<=j){
            a[i]=1;i++;
}
}
for(int i=0;i<=L;i++){
	if (a[i]==0)
count++;
}
cout<<count<<" "<<endl;
return 0;
}

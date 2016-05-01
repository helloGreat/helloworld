#include <iostream>
using namespace std;
int main (){
char a[100];int c[100];
int i=1;char boy,count;
int b=0;
c[b]=0;
cin>>a[0];

while(cin>>a[i]){
if(a[0]==a[i]){
b++;
c[b]=i;
}
else{
cout<<c[b]<<' '<<i<<endl;
b--;
}
i++;

}
return 0;
}


#include <iostream>
using namespace std;
int main() 
{
int n;
int a=0,b=0,c=0;
cin>>n;
if(n>99&&n<1000){
a=n/100;c=n%10;b=(n-100*a)/10;
cout<<a<<" "<<endl;
cout<<b<<" "<<endl;
cout<<c<<" "<<endl;
}
else {
cout<<"SORRY，I’CAN'T RECOGNIZE"<<endl;
}

return 0;

}

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
int n=0;
double a[1000],b[1000],A,B;
cin>>n;
for(int i=0;i<n;i++)
cin>>a[i]>>b[i];

double an[1000];int q=0;
for (int i=0;i<n;i++){
for (int j=i+1;j<n;j++){
A=pow( (a[i]-a[j]),2);
B=pow( (b[i]-b[j]),2);
an[q]=sqrt(A+B);
q++;
}
}

double max=0;
for(int i=0;i<q;i++){
if(an[i]>max)
max=an[i];
}

cout<<fixed<<setprecision(4)<<max<<endl;
return 0;
}

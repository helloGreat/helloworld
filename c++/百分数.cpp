  #include <iostream>
  #include <iomanip>
using namespace std;
int  main (){
int n;
int i;
int a[100];
cin>>n;
int g=0;
int b=0;
int c=0;
int d=0;
for (i=0;i<n;i++){
cin>>a[i];
if(a[i]>=1&&a[i]<=18)
g++;
else if (a[i]>=19&&a[i]<=35)
b++;
else if (a[i]>35&&a[i]<=60)
	c++;
else if (a[i]>=61)
d++;
}
double A;
double B;
double C;
double D;
 A=(double)  g / n * 100;
 B=(double)  b / n * 100;
 C=(double)  c / n * 100;
 D=(double)  d / n * 100;
cout<<fixed<<setprecision(2)<<"1-18: "<<A<<"%"<<endl;
cout<<fixed<<setprecision(2)<<"19-35: "<<B<<"%"<<endl;
cout<<fixed<<setprecision(2)<<"36-60: "<<C<<"%"<<endl;
cout<<fixed<<setprecision(2)<<"60-: "<<D<<"%"<<endl;
return 0;
}

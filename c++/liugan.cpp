#include <iostream>
using namespace std;
int main (){
int n,b;
char a[101][101];
cin>>n;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
	cin>>a[i][j];
}
}
cin>>b;
for(int k=0;k<b;k++){

for(int i=0;i<n;i++){ 
for(int j=0;j<n;j++){
if(a[i][j]=='q'){
a[i][j]='@';}}}

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
  	 if(a[i][j] == '@')
                 {
                     if(i + 1 <n && a[i + 1][j] == '.') 
                        a[i + 1][j]='q';
                     if(j - 1 >= 0 && a[i][j - 1] == '.')
                            a[i][j - 1] = 'q';
                     if(j + 1 < n && a[i][j + 1] == '.')
                            a[i][j + 1]='q';
                     if(i - 1 >= 0 && a[i - 1][j] == '.')
                            a[i - 1][j] = 'q';
}
}
}
}
int count=0;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(a[i][j]=='@')
count++;
}
}
cout<<count<<endl;
return 0;
}

#include <iostream>
#include <string.h>
using namespace std;
int main (){
char str[11],substr[4],str2[15],str3[11];
int n=0;
	while(cin>>str>>substr)
{
char c=0;
int b=0;
for(int i=0;i<11||str[i]!='\0';i++){
if(str[i]>c){
c=str[i];b=i;
}
}

int i=0;
for(;i<=b;i++){
str2[i]=str[i];}
for(int j=0;substr[j]!='\0';j++)
str2[i++]=substr[j];
for(int j=b+1;j<11||str[j]!='\0';j++)
str2[i++]=str[j];

cout<<str2<<endl;
for ( int i = 0; i < 11; i++ )
            str[i] = '\0';
        for ( int i = 0; i < 4; i++ )
            substr[i] = '\0';
        for ( int i = 0; i < 15; i++ )
            str2[i] = '\0';

}

return 0;
}

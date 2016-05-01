#include <iostream>
using namespace std;
int main()
{
char s[80];
int numa=0,nume=0,numi=0,numo=0,numu=0;
cin.getline(s,80);
for (int i=0;s[i]!='\0';i++)
{
   if (s[i]=='a')
       numa++;
else if (s[i]=='e')
       nume++;
else if (s[i]=='i')
       numi++;
else if (s[i]=='o')
       numo++;
else if (s[i]=='u')
       numu++;
}
cout<<numa<<' '<<nume<<' '<<numi<<' '<<numo<<' '<<numu<<endl;
return 0;
}

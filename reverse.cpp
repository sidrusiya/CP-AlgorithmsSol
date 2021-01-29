#include<iostream>
using namespace std;
int main()
{
unsigned int x[]={1,3,5,7};
unsigned int res=0;
for(int i=0;i<32;i++)
{
   int p=0;
   for(int j=0;j<4;j++)
   {
      p+=x[j]&1;
      x[j]=x[j]>>1;
   }
   res=res+((p)*(4-p));
}
cout<<2*res<<endl;
return 0;
}

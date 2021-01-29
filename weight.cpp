#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int w[n],v[n]={0},max1=-1,max2=-1,m[2*n]={0},p=0;
       for(int i=0;i<n;i++)
       {
           cin>>w[i];
           v[w[i]-1]++;
       }
       for(int i=0;i<n;i++)
       {
           for(int j=i;j<n;j++)
           {
               if(i==j)
                  m[i+j]+=v[i]/2;
               else
                  m[i+j]+=min(v[i],v[j]);
           }
       }
       for(int i=0;i<(2*n);i++)
       {
           if(p<m[i])
              p=m[i];
       }
       cout<<p<<endl;
    }
}

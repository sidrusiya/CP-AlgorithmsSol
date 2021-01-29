#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],b[n],c[n]={0};
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    map <int,int> ma;
    for(int i=0;i<n;i++)
        ma[a[i]]=i;
    for(int i=0;i<n;i++)
    {
        c[((i-ma[b[i]]+n)%n)]++;
    }
    int maxx=0;
    for(int i=0;i<n;i++)
    {
        if(c[i]>maxx)
           maxx=c[i];
    }
    cout<<maxx<<endl;
}

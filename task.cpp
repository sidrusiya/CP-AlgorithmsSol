#include<bits/stdc++.h>
using namespace st;

int main()
{
    int t;
    cin>>t;
    int a[t],maxx=INT_MIN,sum=0;
    for(int i=0;i<t;i++){
        cin>>a[i];
        if(maxx<a[i])
            maxx=a[i];
        sum=sum+a[i];
    }
    int cost = sum -maxx;
    int i=0,j=t-1;
    while(i<j)
    {

    }

}

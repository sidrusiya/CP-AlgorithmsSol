#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int b[k+1];
        for(int i=0;i<=k;i++)
            b[i]=-1;
        long long d=(k*(k+1))/2,s=0;
        int i=0,j=0,len=0;
        while(j<n)
        {
            if(b[a[j]]==-1)
            {
                s+=a[j];
            }
            b[a[j]]=j;
            j++;
            if(s==d)
            {
                while(b[a[i]]!=i)
                    i++;
                s-=a[i];
                b[a[i]]=-1;
                i++;
            }
            len=max(len,j-i);
        }
        cout<<len<<endl;
    }
}

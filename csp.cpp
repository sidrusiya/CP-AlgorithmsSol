#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,res=0;
        cin>>n>>k;
        int p[n];
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
            if(p[i]>k)
                res+=(p[i]-k);
        }
        cout<<res<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k,q=0;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            q=1;
            break;
        }
    }
    if(q==1)
        cout<<"Found"<<endl;
    else
        cout<<"Not Found"<<endl;
}

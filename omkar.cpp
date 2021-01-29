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
        int x = (rand()%1000)+1;
        for(int i=0;i<n;i++)
            cout<<x<<" ";
        cout<<endl;
    }
}

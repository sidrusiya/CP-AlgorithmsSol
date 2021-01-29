#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k=0;
        cin>>n;
        int a[n];
        vector<int> b;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
                k++;
            else
            {
                b.push_back(k);
                k=0;
            }
        }
        sort(b.begin(),b.end());
        int t=b.size()-1;
        if(b[t]%2==0)
        {
            cout<<"No"<<endl;
        }
        else
        {
            if(t>1 && (b[t]/2)<(b[t-1]))
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
    }
}

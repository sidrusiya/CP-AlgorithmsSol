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
        int p=0,ne=0,x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x>=0)
                p+=x;
            else
                ne+=x;
        }
        if(p>=(-ne))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

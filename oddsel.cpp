#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n],odd=0,even=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                even++;
            else
                odd++;
        }
        if(odd==0)
            cout<<"No"<<endl;
        else
        {
            if(odd%2!=0 || x!=n)
            {
                cout<<"Yes"<<endl;
            }
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}

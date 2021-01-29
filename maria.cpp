#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include<algorithm>

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int res=1;
        sort(a.begin(),a.end());
        for(int i=n-1;i>=0;i--)
        {
            if (a[i] <= i + 1) {
            res = i + 2 ;
            break;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}


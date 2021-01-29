#include<bits/stdc++.h>
using namespace std;

int next(vector<int> &arr, int target, int end)
{
    int start = 0;

    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        // Move to right side if target is
        // greater.
        if (arr[mid] <= target)
            start = mid + 1;

        // Move left side.
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }

    return ans;
}


signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        vector<int> res;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(res.empty()||a[i]>=res.back())
                res.push_back(a[i]);
            else
            {
                int x=next(res,a[i],res.size());
                res[x]=a[i];
            }
        }
        cout<<res.size();
        for(int i=0;i<res.size();i++)
            cout<<" "<<res[i];
        cout<<endl;
    }
}

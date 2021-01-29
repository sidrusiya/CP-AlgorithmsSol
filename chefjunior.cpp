#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n,k;
    cin>>n>>k;
    stack<int> st;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int j=n-1;
    long long f=1;
    while(j>=0)
    {
        if(st.empty())
            st.push(j);
        else if(a[st.top()]<a[j])
        {
           f=(f*(st.top()+1-j))%1000000007;
           st.push(j);
        }
        else
        {
            while(!st.empty() && a[st.top()]>=a[j])
                st.pop();
            st.push(j);
        }
        j--;
    }
    cout<<f<<endl;
}

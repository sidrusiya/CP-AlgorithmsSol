#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        string s;
        cin>>s;
        vector<char> v;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                v.push_back('(');
            else
            {
                if(!v.empty())
                    v.pop_back();
            }
        }
        cout<<v.size()<<endl;
    }
}

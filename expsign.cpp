#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        stack<char> st;
        int l=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='<')
                st.push('<');
            else
            {
                if(!st.empty() && st.top()=='<')
                {
                    l+=2;
                    st.pop();
                }
                else
                    break;
            }
            if(st.empty())
                l=i+1;
        }
            cout<<l<<endl;
    }
}

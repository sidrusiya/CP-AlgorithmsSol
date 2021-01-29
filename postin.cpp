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
        string s,res;
        cin>>s;
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='A'&& s[i]<='Z')
                res+=s[i];
            else
            {
                if(s[i]=='(')
                    st.push(s[i]);
                else if(s[i]==')')
                {
                    while(st.top()!='(')
                    {
                        res+=st.top();
                        st.pop();
                    }
                    st.pop();
                }
                else if(s[i]=='/'||s[i]=='*'||s[i]=='^')
                    st.push(s[i]);
                else if(s[i]=='+'||s[i]=='-')
                {
                    while(!st.empty() && (st.top()=='/'||st.top()=='*'||st.top()=='^'))
                    {
                        res+=st.top();
                        st.pop();
                    }
                    st.push(s[i]);
                }
            }
        }
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        cout<<res<<endl;
    }
}

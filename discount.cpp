#include<bits/stdc++.h>
using namespace std;

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s = to_string(n);
        int p=s.length()-1;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]>s[i+1])
            {
                p=i;
            }
        }
        int res=0;
        for(int i=0;i<s.length();i++)
        {
            if(i!=p)
            {
                res=res*10+(s[i]-'0');
            }
        }
        cout<<res<<endl;
    }
}

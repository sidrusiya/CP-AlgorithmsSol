#include<bits/stdc++.h>
using namespace std;

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        string p[n];
        int a[26]={0};
        for(int i=0;i<m;i++)
        {
            cin>>p[i];
        }
        for(int i=0;i<s.length();i++)
        {
            cout<<a[s[i]-'a']<<" ";
        }
        cout<<endl;
    }
}

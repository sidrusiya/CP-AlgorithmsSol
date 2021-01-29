#include<bits/stdc++.h>
using namespace std;

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
        int p[26]={0};
        for(int i=0;i<n;i++)
        {
            p[a[i]-'a']++;
        }
        string res="";
        for(int i=0;i<26;i++)
        {
            for(int j=0;j<p[i];j++)
            {
                res+=('a'+i);
            }
        }
        cout<<res<<endl;
    }
}

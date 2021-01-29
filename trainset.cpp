#include<bits/stdc++.h>
using namespace std;

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<string ,int> mp1,mp2;
        for(int i=0;i<n;i++){
            string w;
            int x;
            cin>>w>>x;
            if(x)
            {
                mp1[w]++;
            }
            else
            {
                mp2[w]++;
            }
        }
        long long res=0;
        for(auto i:mp1)
        {
            if(mp2.find(i.first)==mp2.end())
               res+=i.second;
        }
        for(auto i:mp2)
        {
            if(mp1.find(i.first)==mp1.end())
                res+=i.second;
            else
                res+=max(i.second, mp1[i.first]);
        }
        cout<<res<<endl;
    }
}

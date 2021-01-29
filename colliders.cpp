#include<bits/stdc++.h>
#include<vector>
#include<string.h>
using namespace std;

int main(){
   int n,m;
   cin>>n>>m;
   int lp[n+1]={0};
   vector<int> pr;
   vector<string> s;
    for (int i=2; i<=n; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back (i);
        }
        for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=n; ++j)
            lp[i * pr[j]] = pr[j];
    }

    int mp[n+1]={0};

    while(m--){
        char pet;
        int x;
        cin>>pet>>x;

        vector<int> ret;
        int c=abs(x);
        while (c != 1)
        {
            int t=c;
            ret.push_back(lp[c]);
            while(t%lp[c]==0 && t!=1)
                t/=lp[c];
            c = t;
        }

        if(pet=='+'){
            int candy=0;
            if(mp[x]==x){
                s.push_back("Already on");
            }
            else{
                for(int i=0;i<ret.size();i++){
                    if(mp[ret[i]]!=0){
                        candy=mp[ret[i]];
                        break;
                    }
                }
                if(candy!=0)
                    s.push_back("Conflict with "+to_string(candy));
                else{
                    mp[x]=x;
                    for(int i=0;i<ret.size();i++)
                        mp[ret[i]]=x;
                    s.push_back("Success");
                }
            }
        }
        else{
            if(mp[x]!=x)
               s.push_back("Already off");
            else{
                mp[x]=0;
                for(int i=0;i<ret.size();i++){
                    mp[ret[i]]=0;
                }
                s.push_back("Success");
            }
        }
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
    }
    return 0;
}

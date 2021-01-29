#include<bits/stdc++.h>
using namespace std;

signed main() {
    int t;
    cin>>t;
    const int N = 30000;
int lp[N+1];
vector<int> pr;

for (int i=2; i<=N; ++i) {
    if (lp[i] == 0) {
        lp[i] = i;
        pr.push_back (i);
    }
    for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
        lp[i * pr[j]] = pr[j];
}
    while(t--) {
        int d;
        cin>>d;
        long ans;
        int x=0,y=0;
        for(int i=0;i<pr.size();i++)
        {
            if(x && pr[i]>=(x+d))
            {
                y=pr[i];break;
            }

            if(!x && pr[i]>=(d+1))
                x=pr[i];
        }
        ans=x*y;
        cout<<ans<<endl;
    }
}

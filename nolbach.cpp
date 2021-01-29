#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
   int n,k;
   cin>>n>>k;
   int lp[n+1]={0};
   vector<int> pr;

    for (int i=2; i<=n; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back (i);
        }
        for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=n; ++j)
            lp[i * pr[j]] = pr[j];
    }

    int y=0;
    for(int i=0;i<pr.size()-1;i++){
        int x=pr[i]+pr[i+1]+1;
        if(x>n)break;
        if(lp[x]==x)
            y++;
    }

    if(y>=k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

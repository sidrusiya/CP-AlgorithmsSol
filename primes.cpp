#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin>>n;
    const int N = 100000;
int lp[N+1]={0};
vector<int> pr;

for (int i=2; i<=N; ++i) {
    if (lp[i] == 0) {
        lp[i] = i;
        pr.push_back (i);
    }
    for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
        lp[i * pr[j]] = pr[j];
}
for(int i=0;i<n;i++)
    cout<<pr[i]<<endl;
}

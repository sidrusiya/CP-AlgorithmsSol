#include<bits/stdc++.h>
using namespace std;

signed main()
{
    /*const int N = 1000;
    int lp[N+1];
    vector<int> pr;

    for (int i=2; i<=N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back (i);
        }
        for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
            lp[i * pr[j]] = pr[j];
    }*/
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n,k;
        cin>>n;
        k=n;
        for(int i=2;(i*i)<=n;i++)
        {
            if((n%i)==0)
                {k=i;break;}
        }
        cout<<n/k<<" "<<n-(n/k)<<endl;
    }
}

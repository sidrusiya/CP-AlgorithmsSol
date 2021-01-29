#include<bits/stdc++.h>
using namespace std;

signed main()
{
    string S,P;
    cin>>S>>P;
    int k;
    cin>>k;
    const int p = 31;
    const int m = 1e9 + 9;
    int T = S.size();

    vector<long long> p_pow(T);
    p_pow[0] = 1;
    for (int i = 1; i < (int)p_pow.size(); i++)
        p_pow[i] = (p_pow[i-1] * p) % m;

    vector<long long> h(T + 1, 0);
    for (int i = 0; i < T; i++)
        h[i+1] = (h[i] + (A[i] - 'a' + 1) * p_pow[i]) % m;

    vector<long long> n(T + 1, 0);
    for(int i = 0; i < T; i++)
    {
        n[i+1]=n[i];
        if(P[S[i]-'a']=='1')
            n[i+1]++;
    }
    vector<long long> mo;
    for(int i = 0; i<T; i++)
    {
        for(int j = i; j<T; j++)
        {

        }
    }
}

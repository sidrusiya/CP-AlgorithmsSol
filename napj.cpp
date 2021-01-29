#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A>>B;
        const int p = 31;
    const int m = 1e9 + 9;
    int S = B.size(), T = A.size();

    vector<long long> p_pow(max(S, T));
    p_pow[0] = 1;
    for (int i = 1; i < (int)p_pow.size(); i++)
        p_pow[i] = (p_pow[i-1] * p) % m;

    vector<long long> h(T + 1, 0);
    for (int i = 0; i < T; i++)
        h[i+1] = (h[i] + (A[i] - 'a' + 1) * p_pow[i]) % m;
    long long h_s = 0;
    for (int i = 0; i < S; i++)
        h_s = (h_s + (B[i] - 'a' + 1) * p_pow[i]) % m;

    vector<int> occurences;
    for (int i = 0; i + S - 1 < T; i++) {
        long long cur_h = (h[i+S] + m - h[i]) % m;
        if (cur_h == h_s * p_pow[i] % m)
            occurences.push_back(i);
    }
    if(occurences.size()!=0)
    {
       cout<<occurences.size()<<endl;
       for(int i=0;i<occurences.size();i++)
            cout<<occurences[i]+1<<" ";
       cout<<endl;
    }
    else
    {
         cout<<"Not Found"<<endl;
    }
    cout<<endl;
    }
}

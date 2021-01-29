#include<bits/stdc++.h>
using namespace std;

#define MAXN   100001

// stores smallest prime factor for every number
int spf[MAXN];

// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)

        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;

    // separately marking spf for every even
    // number as 2
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;

    for (int i=3; i*i<MAXN; i++)
    {
        // checking if i is prime
        if (spf[i] == i)
        {
            // marking SPF for all numbers divisible by i
            for (int j=i*i; j<MAXN; j+=i)

                // marking spf[j] if it is not
                // previously marked
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}

// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
vector<int> getFactorization(int x)
{
    vector<int> ret;
    while (x != 1)
    {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}


signed main()
{
    int t;
    cin>>t;
    sieve();
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int b[MAXN];
        for(int i=0;i<MAXN;i++)
            b[i]=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            vector<int> p=getFactorization(a[i]);
            for(int j=0;j<p.size();j++)
                b[p[j]]++;
        }
        int res=-1;
        vector<int> vec;
        for(int i=0;i<(n-1);i++)
        {
            vector<int> p=getFactorization(a[i]);
            int bb=0;
            for(int j=0;j<p.size();j++)
            {
                b[p[j]]--;
                vec.push_back(p[j]);
            }
            for(int j=0;j<vec.size();j++)
            {
                if(b[vec[j]]!=0)
                {
                    bb=1;break;
                }
            }
            if(bb==0)
            {
                res=i+1;
                break;
            }
        }
        cout<<res<<endl;
    }
}


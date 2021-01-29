#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n;
        cin>>k>>n;
        int p=1;
        vector<int> primes;
        while(n%2 == 0)
        {
            p=p*2;
            n=n/2;
        }
        primes.push_back(p);
        for (int i = 3; i <= sqrt(n); i = i + 2)
       {
        p=1;
        while (n % i == 0)
        {
            p=p*i;
            n = n/i;
        }
        primes.push_back(p);
        }
        if(n>2)
            primes.push_back(n);
            while(primes.size()>k)
            {
                sort(primes.begin(),primes.end(),greater<int>());
                int x=primes.size();
                int y=k>((x+1)/2)?k:((x+1)/2);
                for(int i=x-1;i>=y;i--)
                {
                    primes[y-(i+1-y)]*=primes[i];
                    primes.pop_back();
                }
            }
            long long sum=0;
            for(int i=0;i<primes.size();i++)
            {
                sum+=primes[i];
            }
            sum+=(k-primes.size());
            cout<<sum<<endl;
    }
}

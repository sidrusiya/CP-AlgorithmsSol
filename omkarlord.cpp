#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long k;
        cin>>n>>k;
        vector<long> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(k > 1) {
			k = 2 + k % 2;
		}
		while(k--) {
			int mx = -1000000000;
			for(int i = 0; i < n; i++) {
				if(mx<a[i])
				  mx=a[i];
			}
			for(int i = 0; i < n; i++) {
				a[i] = mx - a[i];
			}
		}
		for(int i = 0; i < n; i++) {
			cout << a[i] << (i + 1 == n ? '\n' : ' ');
		}
    }
}

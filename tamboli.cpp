/*#include<bits/stdc++.h>
using namespace std;

int tam(long long a[],long long b[],int n,int p)
{
    long long minp=a[0]+b[0],maxp=a[n-1]+b[n-1];
    while(minp<=maxp)
    {
        long long c=minp+(maxp-minp)/2,ans=0;
        for(int i=0;i<n;i++)
        {
            int l=0,h=n-1,x=-1;
            while(l<=h)
            {
                int mid=l+(h-l)/2;
                if((c-a[i])>=b[mid])
                {
                    x=mid;
                    l=mid+1;
                }
                else
                {
                    h=mid-1;
                }
            }
            ans+=(x+1);
        }
        if(ans==p)
            return c;
        else if(ans>p)
            maxp=c-1;
        else
            minp=c+1;
    }
}

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,q;
        cin>>k>>q;
        long long a[k],b[k];
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<k;i++)
        {
            cin>>b[i];
        }
        sort(a,a+k);
        sort(b,b+k);
        while(q--)
        {
            int p;
            cin>>p;
            cout<<tam(a,b,k,p)<<endl;
        }
    }
}*/
#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <queue>

using namespace std;

const int maxn = 20333;

long long a[maxn], b[maxn];
int k[maxn];
pair <int, int> q[maxn];
int main(){
	int tc;
	scanf("%d", &tc);
	while (tc--){
		int n, m;
		scanf("%d%d", &n, &m);
		int i;
		for (i = 1; i <= n; i++)
			scanf("%lld", &a[i]);
		for (i = 1; i <= n; i++)
			scanf("%lld", &b[i]);
		for (i = 1; i <= m; i++){
			scanf("%d", &q[i].first);
			q[i].second = i;
			if (q[i].first > n*n) return 123;
		}
		sort(a + 1, a + n + 1);
		sort(b + 1, b + n + 1);
		sort(q + 1, q + m + 1);
		priority_queue <pair <long long, int>> f;
		for (i = 1; i <= n; i++){
			k[i] = 1;
			f.push(make_pair(-a[i] - b[1], i));
		}
		int cnt = 1;
		long long ans[555], cur = abs(f.top().first);
		int x = f.top().second;
		k[x]++;
		//cout<<cur<<endl;
		if (k[x] <= n) f.push(make_pair(-a[x] - b[k[x]], x));
		f.pop();
		for (i = 1; i <= m; i++){
			while (cnt < q[i].first){
				x = f.top().second;
				cur = abs(f.top().first);
				f.pop();
				k[x]++;
				if (k[x] <= n) f.push(make_pair(-a[x] - b[k[x]], x));
				cnt++;
			}
			ans[q[i].second] = cur;
		}
		for (i = 1; i <= m; i++)
			printf("%lld\n",ans[i]);
	}
	//system("pause");
}

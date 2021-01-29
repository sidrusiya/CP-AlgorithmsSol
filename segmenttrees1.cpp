#include<bits/stdc++.h>
using namespace std;

const int N=100000;

int n,q;
int tree[2*N];

void build(int arr[])
{
    for(int i=0;i<n;i++)
        tree[n+i]=arr[i];
    for(int i=n-1;i>0;i--)
        tree[i]=tree[i<<1]+tree[i<<1|1];
}

void update(int p, int v)
{
    tree[p+n]=v;
    p=p+n;
    for(int i=p;i>1;i>>=1)
      tree[i>>1]=tree[i]+tree[i^1];
}

int query(int l,int r)
{
    int res = 0;

    // loop to find the sum in the range
    for (l += n, r += n; l < r; l >>= 1, r >>= 1)
    {
        if (l&1)
            res += tree[l++];

        if (r&1)
            res += tree[--r];
    }

    return res;
}

signed main()
{
    cin>>n>>q;
    int x[n];
    for(int i=0;i<n;i++)
        cin>>x[i];
    build(x);
    update(n-1,2);
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        cout<<query(a,b)<<endl;
    }
}

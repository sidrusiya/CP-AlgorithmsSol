#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int p = n/k;
        int maxx=0;
        if(p>=m)
        {
            maxx=m;
        }
        else
        {
            int x = m-p;
            int y = k-1;
            int z = x/y;
            if(x%y)
                z++;
            maxx = p - z;
        }
        cout<<maxx<<endl;
    }
    return 0;
}

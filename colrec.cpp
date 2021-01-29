#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int r,g,b;
    cin>>r>>g>>b;
    vector<int> R(r),G(g),B(b);
    for(int i=0;i<r;i++)
        cin>>R[i];
    for(int i=0;i<g;i++)
        cin>>G[i];
    for(int i=0;i<b;i++)
        cin>>B[i];
    sort(R.begin(),R.end());
    sort(G.begin(),G.end());
    sort(B.begin(),B.end());
    r--;g--;b--;
    long long maxa=0;
    while(r>=0 && g>=0 && b>=0)
    {
        if(r>g && r>b)
        {
            if(G[g]>B[b])
            {
               maxa+= R[r]*G[g];
            }
            else if(B[b]>G[g])
            {
                maxa+=B[b]*G[g];
            }
            else
            {

            }
        }
        else if(g>b && g>r)
        {

        }
        else
        {

        }
    }
    while(r>=0 && g>=0)
    {
        maxa+=R[r]*G[g];
        r--;g--;
    }
    while(g>=0 && b>=0)
    {
        maxa+=B[b]*G[g];
        b--;g--;
    }
    while(b>=0 && r>=0)
    {
        maxa+=R[r]*B[b];
        r--;b--;
    }
    cout<<maxa<<endl;
}

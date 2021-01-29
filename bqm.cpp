#include <bits/stdc++.h>
using namespace std;


void dfs(vector< pair<int, int> > g[], bool visit[], int u)
{
    visit[u] = true;

    for (int i = 0; i < g[u].size(); i++)
    {
        int v = g[u][i].first;
        if (!visit[v])
        {
            if (!g[u][i].second)
            {
            dfs(g, visit, v);
            }
        }
    }
}
void pMRootNode(int edges[][2], int e)
{

    int V = e + 1;
    vector< pair<int, int> > g[V];

    bool visit[V];

    int u, v;
    for (int i = 0; i < e; i++)
    {
        u = edges[i][0];
        v = edges[i][1];

        g[u].push_back(make_pair(v, 0));

        g[v].push_back(make_pair(u, 1));
    }
    for (int i = 0; i < V; i++)
    {
        visit[i] = false;
    }
    int res=0;
    for(int i=0;i<V;i++)
    {
        if(!visit[i])
        {
           dfs(g, visit, i);
           res++;
        }
    }
    cout << res << endl;
}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n-1][2];
        for(int i=0;i<(n-1);i++)
        {
             cin>>a[i][0]>>a[i][1];
             a[i][0]--;a[i][1]--;
        }
        pMRootNode(a, n-1);
    }
    return 0;
}


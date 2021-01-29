#include <bits/stdc++.h>
using namespace std;
int dfs(vector< pair<int, int> > g[],
        pair<int, int> disRev[], bool visit[], int u)
{
    visit[u] = true;
    int totalRev = 0;

    for (int i = 0; i < g[u].size(); i++)
    {
        int v = g[u][i].first;
        if (!visit[v])
        {
            disRev[v].first = disRev[u].first + 1;

            disRev[v].second = disRev[u].second;


            if (g[u][i].second)
            {
                disRev[v].second = disRev[u].second + 1;
                totalRev++;
            }
            totalRev += dfs(g, disRev, visit, v);
        }
    }

    return totalRev;
}
void pMRootNode(int edges[][2], int e)
{

    int V = e + 1;
    vector< pair<int, int> > g[V];

    pair<int, int> disRev[V];

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
        disRev[i].first = disRev[i].second = 0;
    }

    int root = 0;

    int totalRev = dfs(g, disRev, visit, root);

    int res = INT_MAX;

    for (int i = 0; i < V; i++)
    {

        int edgesToRev = (totalRev - disRev[i].second) +
                         (disRev[i].first - disRev[i].second);

        if (edgesToRev < res)
        {
            res = edgesToRev;
            root = i;
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

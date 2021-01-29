#include<bits/stdc++.h>
using namespace std;

void printPath(vector<int> stacking ,int a[])
{
   int n=stacking.size();
   vector<int> arr;
   for(int i=0;i<n;i++)
     arr.push_back(a[stacking[i]-1]);
   sort(arr.begin(), arr.end());

   // Initialize difference as infinite
   int diff = INT_MAX;

   // Find the min diff by comparing adjacent
   // pairs in sorted array
   for (int i=0; i<n-1; i++)
      if (arr[i+1] - arr[i] < diff)
          diff = arr[i+1] - arr[i];
    cout<<diff<<endl;
}

void DFS(vector<int> v[],
         bool vis[],
         int x,
         int y,
         vector<int> stacking, int a[])
{
    stacking.push_back(x);
    if (x == y) {

        // print the path and return on
        // reaching the destination node
        printPath(stacking,a);
        return;
    }
    vis[x] = true;

    // A flag variable to keep track
    // if backtracking is taking place
    int flag = 0;
    if (!v[x].empty()) {
        for (int j = 0; j < v[x].size(); j++) {
            // if the node is not visited
            if (vis[v[x][j]] == false) {
                DFS(v, vis, v[x][j], y, stacking, a);
                flag = 1;
            }
        }
    }
    if (flag == 0) {

        // If backtracking is taking
        // place then pop
        stacking.pop_back();
    }
}


void DFSCall(int x,
             int y,
             vector<int> v[],
             int n,
             vector<int> stacking,int a[])
{
    // visited array
    bool vis[n + 1];

    memset(vis, false, sizeof(vis));


    // DFS function call
    DFS(v, vis, x, y, stacking,a);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,Q;
        cin>>N>>Q;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
        vector<int> vec[N+1];
        for(int i=0;i<N-1;i++)
        {
           int u,v;
           cin>>u>>v;
           vec[u].push_back(v);
           vec[v].push_back(u);
        }
        int A[Q],B[Q];
        for(int i=0;i<Q;i++)
        {
            cin>>A[i]>>B[i];
            vector<int> stacking;
            DFSCall(A[i], B[i], vec, N, stacking,a);
        }
    }
}

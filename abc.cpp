#include<bits/stdc++.h>
using namespace std;



int sol(vector<int> &A,vector<int> &B,int C)
vector<vector<int>> dp(B.size()+1,vector<int>(A.size()+1));
    for(int i=0;i<=A.size();i++)
    {
        dp[0][i]=0;
    }
    int x=1;
    for(int i=1;i<=B.size();i++)
    {
        dp[i][0]=(C*x);
        x++;
    }
    for(int i=1;i<=A.size();i++)
    {
        for(int j=1;j<=B.size();j++)
        {
            if(A[i]==B[j])
              dp[j][i]=dp[j-1][i-1];
            else
              dp[j][i]=min(dp[j][i-1],C+min(dp[j-1][i-1],dp[j-1][i]));
        }
    }
    for(int i=0;i<=A.size();i++)
    {
        for(int j=0;j<=B.size();j++)
        {
            cout<<dp[j][i]<<" ";
        }
    }
    return dp[B.size()][A.size()];

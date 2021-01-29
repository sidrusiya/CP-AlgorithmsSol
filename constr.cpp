#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        string A,B;
        cin>>A>>B;
        int l=0;
        vector<vector<int>> has(26);
        bool pot[26]={false};
        for(int i=0;i<N;i++)
        {
            has[A[i]-97].push_back(i);
        }
        for(int i=0;i<N;i++)
        {
            if(A[i]<B[i] || has[B[i]-97].size()==0)
            {
                l=1;
                break;
            }
            else if(A[i]!=B[i])
            {
                has[B[i]-97].push_back(i);
                pot[B[i]-97]=true;
            }
        }
        if(l==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            int kaku=0;
            for(int i=0;i<26;i++)
            {
                if(pot[i])
                   kaku++;
            }
            cout<<kaku<<endl;
            for(int i=25;i>=0;i--)
            {
                if(pot[i])
                {
                    sort(has[i].begin(),has[i].end());
                    cout<<has[i].size()<<" ";
                    for(int j=0;j<has[i].size();j++)
                    {
                        cout<<has[i][j]<<" ";
                    }
                    cout<<endl;
                }
            }
        }
    }
    return 0;
}

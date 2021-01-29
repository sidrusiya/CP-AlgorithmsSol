#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,t=0,co=0;
        cin>>n;
        string A,B;
        cin>>A>>B;
        vector<vector<int>> a(20,vector<int>(20,0));
        for(int i=0;i<n;i++)
        {
            if((B[i]-A[i])<0)
            {t=1;break;}
            else
            {
               a[A[i]-'a'][B[i]-'a']++;
            }
        }
        for(int i=0;i<20 && t==0;i++)
        {
            for(int j=i+1;j<20;j++)
            {

            }
        }
        if(t==1)
            cout<<-1<<endl;
        else
            cout<<co<<endl;
    }
}

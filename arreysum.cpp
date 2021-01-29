#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        vector<int> res1,res2;
        int x=0,y=0,z=0;
        while(a.size()>1)
        {
            x=0,z=0;
            for(int i=0;i<a.size();i++)
            {
            if((i==0 || a[i]!=a[i-1])){
            if(x<k)
            {
               res1.push_back(a[i]);
            }
            else
            {
               if(z<res1.size())
               res2.push_back(a[i]-res1[z++]);
               else
                res2.push_back(a[i]-res1[z-1]);
            }
            x++;
            if(x==k)
               res2.push_back(0);
            }
            }
            y++;
            sort(res2.begin(),res2.end());
            a.clear();
            a=res2;
            if(k==1 && a.size()>=2)
            {
                y=-1;break;
            }
            res1.clear();
            res2.clear();
        }
        cout<<y<<endl;
    }
}

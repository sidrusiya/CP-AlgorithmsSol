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
        string s;
        cin>>s;
        int x=0,p=0;
        vector<int> arr;
        vector<int> brr(2,0);
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
               x++;
            }
            else
            {
                if(p && x)
                    arr.push_back(x);
                else if(!p)
                    brr[0]=x;
                x=0;
                p=1;
            }
        }
        brr[1]=x;
        sort(arr.begin(),arr.end(),greater<int>());
        sort(brr.begin(),brr.end(),greater<int>());
        for(int i=0;i<arr.size();i++)
        {
            if(k==0)
                break;
            if(k<=2)
            {
                if(k==2)
                {
                    if(arr[i]>=(brr[0]+brr[1]))
                        arr[i]=0;
                    else
                        brr[0]=0,brr[1]=0;
                    k-=2;
                }
                else
                {
                    brr[0]=0;
                    k--;
                }
            }
            else
            {
                arr[i]=0;
                k-=2;
            }
        }
        if(k==1)
            brr[0]=0,k--;
        if(k>=2)
            brr[0]=0,brr[1]=0,k-=2;
        if(brr[0]==n)
            brr[0]=0;
        long long sum=0;
        for(int i=(arr.size()-1);i>=0;i--)
        {
            sum+=arr[i];
        }
         sum+=brr[0];
         sum+=brr[1];
        cout<<sum<<endl;
    }
}

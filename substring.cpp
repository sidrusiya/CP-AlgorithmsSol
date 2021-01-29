#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int N;
        scanf("%d",&N);
        string s;
        cin>>s;
        int a[26]={0},po=0;
        for(int i=0;i<N;i++)
        {
            a[s[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]%2!=0)
            {
                po=1;
                break;
            }
        }
        if(po==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}


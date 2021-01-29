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
        int a[N],b[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<N;i++)
        {
            cin>>b[i];
        }
        long long d1=0,d2=0,res=0;
        for(int i=0;i<N;i++)
        {
            if(d1==d2 && a[i]==b[i])
                res+=a[i];
            d1+=a[i];
            d2+=b[i];
        }
        cout<<res<<endl;
    }
    return 0;
}

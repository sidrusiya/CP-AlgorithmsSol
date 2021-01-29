#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long ts;
        cin>>ts;
        while((ts&1)!=1)
        {
            ts>>=1;
        }
        ts>>=1;
        cout<<ts<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

signed main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int a,b,diff;
        cin>>a>>b;
        if(a>b)
        {
            diff=(a-b);
        }
        else
        {
            diff=(b-a);
        }
        if(diff%10)
            cout<<(diff/10)+1<<endl;
        else
            cout<<diff/10<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin>>n;
    int arr[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int x=0;
    for(int i=0;i<12;i++)
    {
        if(!(n%arr[i]))
        {
            x=1;break;
        }
    }
    if(x)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

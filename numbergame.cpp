#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long p=1;
        while(n%2==0)
        {
            n/=2;
            p*=2;
        }
        if(n==1 && p==2)
            cout<<"Ashishgup"<<endl;
        else if(n==1 && p!=2)
            cout<<"FastestFinger"<<endl;
        else if(n!=1 && p==2)
            cout<<"FastestFinger"<<endl;
        else
            cout<<"Ashishgup"<<endl;

    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long n1=(n)/((k*k+1)*(k+1));
        cout<<n1<<" "<<n1*k<<" "<<n1*k*k<<" "<<n1*k*k*k<<endl;
    }
    return 0;
}

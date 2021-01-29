#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long k;
        cin>>k;
        int d0,d1;
        cin>>d0>>d1;
        int x=(d0+d1)%10;
        int res = (d0 + d1)%3;
        res = res + x % 3;
        if(k>=3){
        long long p = (k-3)/4;
        res = res + ((p%3)*(((2*x)%10 + (4*x)%10 +(8*x)%10 + (6*x)%10)%3))%3;
        int ka=2;
        for(int i=0;i<(k-3)%4;i++)
        {
            res =res + (((ka*x)%10)%3);
            ka=(ka*2)%10;
        }
        }
        res = res%3;
        if(!res)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

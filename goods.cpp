#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[5],P,sum=0;
        for(int i=0;i<5;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        cin>>P;
        sum=sum*P;
        if(sum<=120)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}

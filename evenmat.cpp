#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],p=1;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<n;j++)
                    a[j]=p++;
            }
            else
            {
                for(int j=n-1;j>=0;j--)
                    a[j]=p++;
            }
            for(int j=0;j<n;j++)
                cout<<a[j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}

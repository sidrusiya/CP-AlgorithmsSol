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
        int a[n],b[n],x=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    if((b[j]^b[j+1])==1)
                    {
                        int temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                        b[j]=!b[j];
                        b[j+1]=!b[j+1];
                    }
                    else
                    {
                        x=1;
                        break;
                    }
                }
            }
        }
        if(x==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}

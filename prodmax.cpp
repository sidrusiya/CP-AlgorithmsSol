#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
          {
              cin>>a[i];
          }
        sort(a,a+n);
        int i=0,j=n-1,k=0;
        long long prod;
        long long prod1=a[j]*a[j-1]*a[j-2]*a[j-3]*a[j-4];
        long long prod2=a[i]*a[i+1]*a[j]*a[j-1]*a[j-2];
        long long prod3=a[i]*a[i+1]*a[i+2]*a[i+3]*a[j];
        if(prod1>=prod2 && prod1>=prod3)
            prod=prod1;
        else if(prod2>=prod1 && prod2>=prod3)
            prod=prod2;
        else
            prod=prod3;
        cout<<prod<<endl;
    }
}

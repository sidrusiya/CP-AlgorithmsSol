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
        char s1,s2,s3,s4;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            if(i==0)
                s1=s[1];
            if(i==1)
                s2=s[0];
            if(i==n-2)
                s3=s[n-1];
            if(i==n-1)
                s4=s[n-2];
        }
        if(s1==s2 && s3==s4)
        {
            if(s1==s3)
            {
                cout<<2<<endl;
                cout<<1<<" "<<2<<endl;
                cout<<2<<" "<<1<<endl;
            }
            else
                cout<<0<<endl;
        }
        else if(s1==s2 || s3==s4)
        {
            cout<<1<<endl;
            if(s1==s2)
            {
                if(s1==s3)
                   cout<<n-1<<" "<<n<<endl;
                else
                    cout<<n<<" "<<n-1<<endl;
            }
            else
            {
                if(s1==s3)
                    cout<<1<<" "<<2<<endl;
                else
                    cout<<2<<" "<<1<<endl;
            }
        }
        else
        {
            cout<<2<<endl;
            cout<<1<<" "<<2<<endl;
            if(s1!=s3)
                cout<<n-1<<" "<<n<<endl;
            else
                cout<<n<<" "<<n-1<<endl;
        }
    }
}

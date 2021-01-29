#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int k=0;
        for(int i=1;i<s.length()-1;i++)
        {
            if(s[i]=='1')
                k++;
        }
        if(s[0]=='1' && s[s.length()-1]=='1' && s.length()!=1)
            k++;
        cout<<k<<endl;
    }
    return 0;
}

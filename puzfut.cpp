#include<bits/stdc++.h>
using namespace std;

signed main() {
    int t;
    cin>>t;
    while(t--) {
        int n,x=0;
        cin>>n;
        string b,a="1";
        cin>>b;
        for(int i=1;i<b.length();i++) {
            if(b[i]==b[i-1])
            {
                if(a[x]=='1')
                    a+="0";
                else
                    a+="1";
            }
            else
            {
                if(b[i]=='0')
                    a+=a[x];
                else
                    a+="1";
            }
            x++;
        }
        cout<<a<<endl;
    }
}

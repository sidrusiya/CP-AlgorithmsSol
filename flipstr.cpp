#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A>>B;
        bool st=false,en=false,st2=false,en2=false;
        int res=0;
        for(int i=0;i<A.length();i+=2)
        {
            if(A[i]!=B[i])
            {
                st=true;
            }
            else
            {
                if(st)
                  en=true;
            }
            if(st && en)
            {
                res++;
                st=false;en=false;
            }
            if(i+1<(A.length()))
            {
            if(A[i+1]!=B[i+1])
            {
                st2=true;
            }
            else
            {
                if(st2)
                  en2=true;
            }
            if(st2 && en2)
            {
                res++;
                st2=false;en2=false;
            }
            }
        }
        if(st)
            res++;
        if(st2)
            res++;
        cout<<res<<endl;
    }
}

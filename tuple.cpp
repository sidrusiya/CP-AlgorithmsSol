#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long p,q,r,a,b,c;
        cin>>p>>q>>r;
        cin>>a>>b>>c;
        int ar=3;
        int x=a-p,y=b-q,z=c-r;
        if(x==0 && y==0 && z==0)
            ar=0;
        else if(( x==y || (x/p == y/q) || x==0 || y==0 ) && ( x==z || (x/p == z/r) || x==0 || z==0 ) && ( z==y || (z/r == y/q) || z==0 || y==0 ))
            ar=1;
        else if(( x==y || (x/p == y/q) || x==0 || y==0 ) || ( x==z || (x/p == z/r) || x==0 || z==0 ) || ( z==y || (z/r == y/q) || z==0 || y==0 ))
            ar=2;
        else if()

        cout<<ar<<endl;
    }
}

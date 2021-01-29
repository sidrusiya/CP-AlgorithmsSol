#include<iostream>
#include<stdlib.h>
using namespace std;

int max(int a,int b){
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int clen=0,maxlen=0,flag=0,n=20,k=2;
    int a[n]={1,0,0,1,1,1,1,0,1,0};

    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            clen++;
            maxlen=max(maxlen,clen);
        }
        else if(a[i]==0&&flag<k)
        {
            flag++;
            clen++;
            maxlen=max(maxlen,clen);
        }
        else if(flag>=k)
        {
            clen=0;
            flag=0;i--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
     cout<<endl<<maxlen;
    return maxlen;
}

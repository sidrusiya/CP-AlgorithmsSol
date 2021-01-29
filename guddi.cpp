#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
        int i=0,j=N-1;
        while(i<j)
        {
            if(a[i]==0 && a[j]==0)
            {
                i++;j--;
            }
            else if(a[i]==0)
            {
                i++;
            }
            else if(a[j]==0)
            {
                j--;
            }
            else
            {
                break;
            }
        }
        int x=-1,y=-1,xi=i,yi=i,len=0;
        while(yi<=j)
        {
            int k=0;
            while(a[yi]==0)
            {
                k++;
                yi++;
            }
            if(k>len)
            {
                x=xi+1;
                y=yi-1;
                len=k;
            }
            yi++;
            xi=yi;
        }
        if(i>=j)
        {
            if(a[i]==0)
                cout<<0<<endl;
            else
                cout<<-1<<endl;
        }
        else
        {
            int diff1 = (j - i);
            int diff2 = N -(y-x)-2;
            if(diff1>=diff2)
                cout<<diff2<<endl;
            else
                cout<<diff1<<endl;
        }
    }
    return 0;
}

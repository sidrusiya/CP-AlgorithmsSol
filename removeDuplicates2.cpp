#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,2,2,2,2,2,2,3,3,3,3,3,4,4,5,5,5,5,5,5,5,5,6};
    int count=0,flag=0,i;
    for(i=0;i<23;i++)
    {
        if(a[i]!=a[i+1])
        {
            a[i-count]=a[i];
            flag=0;
        }
        else if(flag==0)
        {
            flag++;
            a[i-count]=a[i];
        }
        else if(flag==1)
        {
            a[i-count]=a[i];
            flag++;
            count++;
        }
        else
        count++;
    }
     a[i-count]=a[i];
    for(int i=0;i<24-count;i++)
    cout<<a[i]<<" ";
    return 0;
}

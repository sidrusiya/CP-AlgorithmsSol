#include<bits/stdc++.h>
using namespace std;

signed main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long M,N,X,Y;
        scanf("%lld %lld %lld %lld",&N,&M,&X,&Y);
        long long sum=0;
        if((2*X)<=Y)
            sum=N*M*X;
        else
        {
            if((N%2)==0 && (M%2)==0)
            {
                sum=(N/2)*M*Y;
            }
            else if((N%2)==0)
            {
                sum=(M/2)*N*Y;
                sum+=((N/2)*Y);
            }
            else if(M%2==0)
            {
                sum=(N/2)*M*Y;
                sum+=((M/2)*Y);
            }
            else
            {
                sum=(N/2)*(M-1)*Y;
                sum+=((N/2)+(M/2))*Y;
                if(Y>=X)
                {
                   sum+=X;
                }
                else
                {
                    sum+=Y;
                }
            }
        }
        printf("%lld\n",sum);
    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,c,t;
        cin>>h>>c>>t;
        if (h + c - 2 * t >= 0)
			puts("2");
		else{
			int a = h - t;
			int b = 2 * t - c - h;
			int k = 2 * (a / b) + 1;
			long long val1 = abs(k / 2 * 1ll * c + (k + 1) / 2 * 1ll * h - t * 1ll * k);
			long long val2 = abs((k + 2) / 2 * 1ll * c + (k + 3) / 2 * 1ll * h - t * 1ll * (k + 2));
			printf("%d\n", val1 * (k + 2) <= val2 * k ? k : k + 2);
		}
    }
    return 0;
}

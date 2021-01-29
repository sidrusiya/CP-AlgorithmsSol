#include <bits/stdc++.h>
#define ll long long int
#define ld double
#define M 100010
using namespace std;
ll n;ld ans=99999999999999999LL,k;
pair<ld,ld> line[M];
ld f(ld t) {
	ld tmp=0,tmp2=99999999999999999LL;
	for (int i=0;i<n;i++) {
		tmp=max(tmp,line[i].first*t+line[i].second);
		tmp2=min(tmp2,line[i].first*t+line[i].second);
	}
	return (tmp-tmp2);
}
int main() {
	ios::sync_with_stdio(false);cin.tie(0);
	cin>>n>>k;
	for (int i=0;i<n;i++) cin>>line[i].first>>line[i].second;
	ld L=0.0,R=k,lp=100;
	while (lp--) {
		ld mid1 = L+(R-L)/3;
		ld mid2 = R-(R-L)/3;
		ld q=f(mid1),w=f(mid2);
		ans=min(ans,min(q,w));
		if (q<w) R=mid2; else L=mid1;
	}
	cout<<fixed<<setprecision(6)<<ans<<endl;
}

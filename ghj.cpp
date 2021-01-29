#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
	long long n;
	cin>>n;
	long long res=1,res2=1;
	int q=1;
	while(res2<n)
	{
		if(q%2)
		  res<<=1;
		else
		  res<<=2;
		res2+=res;
		q=!q;
	}
	q=!q;
	vector<long long> p;
	long long im;
	while(n>1)
	{
		p.push_back(n);
		res2=res2-res;
		if(q)
		{
			res>>=1;
			im=(n-(res2+1))/2;
		}
		else
		{
			res>>=2;
			im=(n-(res2+1))/4;
		}
		q=!q;
		n=((res2+1-res)+im);
	}
	for(int i=p.size()-1;i>=0;i--)
	  cout<<p[i]<<" ";
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

signed main(){
long long n;
cin>>n;
long long w[n],h[n];
for(long long i=0;i<n;i++){
cin>>w[i]>>h[i];
}
stack <long long> s;
long long i=0,wid=0;
long long atop=0,maxa=0,x=0;
while(i<n){
if(s.empty() || h[s.top()] <=h[i]){
     s.push(i++);
     x=0;
}
else
{
      long long tpi = s.top();
      s.pop();
      wid+=w[tpi];
      int width = x ? wid : w[tpi];
      maxa = max(maxa, width*h[tpi]);
      x=1;
}
}
while(!s.empty()){
  int tpi = s.top();
  s.pop();
  wid+=w[tpi];
  int width = x ? wid : w[tpi];
  maxa = max(maxa, width*h[tpi]);
  x=1;
}
cout<<maxa<<endl;
}


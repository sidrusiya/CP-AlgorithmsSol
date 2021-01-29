#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
    long long N;
    cin>>N;
    long long res=0;
    int g=0;
    for(int i=2;i<=N;i++){
       int x=1,p=i;
       while(p%2==0){
           x*=2;
           p>>=1;
       }
       if(x==N)
         g=1;
       res+=x;
    }
    if(g==0)
    cout<<res<<endl;
    else
    cout<<-1<<endl;
   }
   return 0;
}

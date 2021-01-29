#include<bits/stdc++.h>
using namespace std;

signed main(){
   int t;
   cin>>t;
   while(t--){
     int x;
     cin>>x;
     vector<int> a;
     int p=9;
     while(p){
        if(x>=p)
        {
            x-=p;
            a.push_back(p);
        }
        p--;
     }
     if(x)
        cout<<-1<<endl;
     else
     {
         long long res=0;
         for(int i=a.size()-1;i>=0;i--){
            res= res*10+a[i];
         }
         cout<<res<<endl;
     }
   }
}

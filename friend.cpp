#include<bits/stdc++.h>
using namespace std;

int shaw(string s){
    int xaw=0,n=s.length();
    for(int i=2;i<=n-2;i+=2){
        int x=i/2,y=((n-i)/2);
        string a=s.substr(0,x);
        string b=s.substr(x,x);
        string c=s.substr(i,y);
        string d=s.substr(y+i,y);
        if((a==b) && (c==d)){
           xaw++;
        }
    }
    return xaw;
}

int main(){
   int t;
   cin>>t;
   while(t--){
       string s;
       cin>>s;
       cout<<shaw(s)<<endl;
   }
   return 0;
}

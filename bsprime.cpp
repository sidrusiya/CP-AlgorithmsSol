#include<bits/stdc++.h>
#include<vector>
using namespace std;

const int N =15000000;

int binary[150000000+1];

int lp[N+1];
vector<int> pr;
int k=1;

void sieve(){
    for (int i=2; i<=N; ++i) {
    if (lp[i] == 0) {
        lp[i] = i;
        pr.push_back (i);
        int t=i;
        string s="";
        while(t!=0){
            if(t&1)
                s="1"+s;
            else
                s="0"+s;
            t>>=1;
        }
        for(int j=0;j<s.length();j++){
            binary[k]=binary[k-1];
            if(s[j]=='1' && k<=10*N)
                binary[k]++;
            k++;
        }
    }
    for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
        lp[i * pr[j]] = pr[j];
    }
}

int main(){
   sieve();
   int t;
   cin>>t;
   long long n;
   while(t--){
       cin>>n;
       cout<<binary[n]<<endl;
       cout<<binary[150000000]<<endl;
   }
   return 0;
}

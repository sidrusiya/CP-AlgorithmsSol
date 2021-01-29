/*#include<bits/stdc++.h>
#include<vector>
using namespace std;

const int N=2000000;

vector<int> p(N+1);

vector<int> depth(N+1);

void toitent(){
    p[0]=0;
    p[1]=1;
    depth[0]=depth[1]=0;
    for(int i=2;i<=N;i++)
        p[i]=i;
    for(int i=2;i<=N;i++){
        if(p[i]==i){
        for(int j=i;j<=N;j+=i){
            p[j]-=p[j]/i;
        }
        }
        depth[i]=depth[p[i]]+1;
    }
}

int main(){
    int t;
    cin>>t;
    toitent();
    while(t--){
        long long m,n,result=0;
        cin>>m>>n;
        for(int i=m;i<=n;i++){
            result+=depth[i];
        }
        cout<<result<<endl;
    }
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio( false ); cin.tie(NULL);
    int N,Q;
    cin>>N>>Q;
    int p[N];
    for(int i=0;i<N;i++){
        long long x;
        cin>>x;
        if(i==0)
          p[i]=0;
        else
          p[i]=p[i-1];
        if(x==3|| x==4|| x==6)
           p[i]++;
    }
    while(Q--){
        int l,r,res=0;
        cin>>l>>r;
        if(l==1)
        cout<<p[r-1]<<endl;
        else
        cout<<p[r-1]-p[l-2]<<endl;
    }
    return 0;
}


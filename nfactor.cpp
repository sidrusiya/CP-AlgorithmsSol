#include<bits/stdc++.h>
#include<vector>
using namespace std;

const int N =10600000;

int lp[N+1];
vector<int> pr;
//int vor[11][N+1];
vector<int> chor;

void sieve(){
    for (int i=2; i<=N; ++i) {
    if (lp[i] == 0) {
        lp[i] = i;
        pr.push_back (i);
    }
    for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
        lp[i * pr[j]] = pr[j];
    }
}

/*int getFactorization(int x)
{
    int ret=0;
    while (x != 1)
    {
        ret++;
        int t=x;
        while(!(t%lp[x]) && t!=1)
          t = t / lp[x];
        x=t;
    }
    return ret;
}*/

int main(){

   sieve();

  // vor[0][0]=vor[0][1]=1;

 /*  for(int i=2;i<N;i++){
       int x=getFactorization(i);
       for(int j=0;j<=10;j++)
           vor[j][i]=vor[j][i-1];
       if(x<=10)
         vor[x][i]+=1;
   }



   int t;
   cin>>t;
   int a,b,n;
   while(t--){
    cin>>a>>b>>n;
    int sum=vor[n][b]-vor[n][a];
    if(getFactorization(a)==n)
       sum++;
    cout<<sum<<endl;
   }*/

   for(int i=2;i<=N;i++){
      if(lp[i]!=i && (i/lp[i])!=lp[i] && lp[i/lp[i]]==(i/lp[i])){
           chor.push_back(i);
      }
   }

   int t;
   cin>>t;
   int k;
   while(t--){
      cin>>k;
      cout<<chor[k-1]<<endl;
   }
   return 0;
}

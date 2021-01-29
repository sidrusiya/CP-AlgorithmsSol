#include<iostream>
using namespace std;
#include<vector>
#include<cstring>
void primesum(int n){
    bool prime[n+1];
    vector<int> v;
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i] && prime[n-i]){
            v.push_back(i);
            v.push_back(n-i);
            break;
        }
    }
    cout<<v[0]<<" "<<v[1];
}
int main(){
primesum(244);
}

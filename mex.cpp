#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n,s;
    while(t--){

        cin>>n>>s;
        int a[n],b[n],i;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            cin>>b[i];
        }
        int x=INT_MAX,y=INT_MAX;
        for(i=0;i<n;i++){
            if(b[i]==0 && x>a[i]){
                x=a[i];
            }
            if(b[i]==1 && y>a[i]){
                y=a[i];
            }
        }
        if((s+x+y)<=100)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=0,y=0;
        string r,b;
        cin>>r>>b;
        for(int i=0;i<n;i++){
            if(r[i]>b[i])
                x++;
            if(b[i]>r[i])
                y++;
        }
        if(x>y)
            cout<<"RED"<<endl;
        else if(y>x)
            cout<<"BLUE"<<endl;
        else
            cout<<"EQUAL"<<endl;
    }
}

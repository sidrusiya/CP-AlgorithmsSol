#include<iostream>
using namespace std;
#include<string>
string cc(int n){
    string s1="1";
    for(int i=1;i<n;i++){
        int j=0,k=0;
        char c=s1[j];
        string s2;
        while(j<s1.length()){
           if(c!=s1[j]){
            s2+=(char)(k+48);
            s2+=c;
            c=s1[j];
            k=1;
           }
           else
             k++;
           j++;
        }
        if(k>=1){
            s2+=(char)(k+48);
            s2+=c;
        }
        s1=s2;
    }
    return s1;
}
int main(){
int n;
cin>>n;
cout<<cc(n);
}

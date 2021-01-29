#include<iostream>
using namespace std;
int noble(int n,int a[]){
   for(int i=0;i<n;i++){
       if(a[i]==(n-1-i)&&a[i]!=a[i+1]){
        return 1;
       }
   }
   return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<noble(n,a);
}

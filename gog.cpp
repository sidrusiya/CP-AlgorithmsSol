#include<iostream>
using namespace std;
#include<vector>
vector<int> maxset(vector<int> &A) {

    int k,l,sum=0,mk=0,ml=0,msum=0,p=0,q=0;
    for(int i=0;i<A.size();i++)
    {
       if(A[i]>=0){
           if(p==0)k=i;
           sum+=A[i];
           p=1;
           q=0;
       }
       else
       {
           if(q==0)l=i;
           if(msum<sum){
               msum=sum;
               mk=k;
               ml=l;
           }
           if(msum==sum){
               if(ml-mk<l-k){
                   ml=l;
                   mk=k;
               }
           }
           q=1;
           p=0;
           sum=0;
       }
    }
    if(q==0){
           l=A.size();
           if(msum<sum){
               msum=sum;
               mk=k;
               ml=l;
           }
           if(msum==sum){
               if(ml-mk<l-k){
                   ml=l;
                   mk=k;
               }
           }
    }
    vector<int> B;
    for(int i=mk;i<ml;i++){
        B.push_back(A[i]);
    }
    return B;
}
int main()
{
    vector <int> A={0,0,-1,0};
    vector <int> B=maxset(A);
    for(int i=0;i<B.size();i++)
        cout<<B[i]<<" ";
    return 0;
}

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int Rbs(vector<int> &A){
   int start=0,vend=A.size()-1,mid;
   while(start<=vend){
      mid=start+(vend-start)/2;
      if(A[mid]>A[mid+1])
        return A[mid+1];
      if(A[mid] < A[vend] )
            {
               vend=mid-1;
            }
        else
            {
                start=mid+1;
            }
   }
   return -1;
}
int ms(vector<vector<int>> &A,int tar){
int min =INT_MAX,max = INT_MIN;
    int r = A.size(),c=A[0].size();
    for(int i=0;i<r;i++)
    {
        if(A[i][0]<min)
         min = A[i][0];
         if(A[i][c-1]>max)
         max = A[i][c-1];
    }
    while(min<max)
    {
        int count=0;
        int mid = min+(max-min)/2;
        for(int i=0;i<r;i++)
        count+=upper_bound(A[i].begin(),A[i].end(),mid)-(A[i].begin());


    }
    return 0;
}
int ele(vector<int> &A,int p){
   int l=0,h=A.size()-1,i=-1,j=-1,mid;
   while(l<=h){
    mid=l+(h-l)/2;
    if(A[mid]==p){i=mid;h=mid-1;}
    else if(A[mid]<p)h=mid-1;
    else l=mid+1;

   }
   l=0,h=A.size()-1;
   while(l<h){
    mid=l+(h-l)/2;
    if(A[mid]==p){j=mid;l=mid+1;}
    else if(A[mid]<p)h=mid-1;
    else l=mid+1;
   }
   if(i==-1)return 0;
   else return (j-i+1);
}
int divide(int a,int b)
int main(){
   /*vector<int> A={ 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 7, 7, 8, 8, 8, 8, 9, 9, 10 ,10,10};
   cout<<ele(A,1);
   vector<vector<int>> B={{5,17,100,111},{119,120,127,131}};
   cout<<ms(A,3);*/
   cout<<4^6;
}

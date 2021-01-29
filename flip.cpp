#include<iostream>
using namespace std;
#include<vector>
vector<int> flip(string A){
   /*vector<int>  p;
   int l=0,r=s.length()-1,sum=0;
   for(int i=0;i<s.length();i++){
      sum+=(int)(s[i]-'0');
   }
   int psum=sum,m=0,n=0,maxp=sum;
   while(l<r){
     if(((r-l+1)-2*psum+sum)>sum){
        if(maxp<((r-l+1)-2*psum+sum)){
            maxp=((r-l+1)-2*psum+sum);
            m=l+1;
            n=r+1;
        }
     }
     if(s[l]=='1'){l++;psum-=1;}
     else if(s[r]=='1'){r--;psum-=1;}
     else if(s[r]=='0'){r--;}
     else if(s[l]=='0'){l++;}
   }
   if(m!=0 && n!=0)
   {
       p.push_back(m);
       p.push_back(n);
   }
   cout<<m<<" "<<n;*/
   int max=0,diff=0,i=0,start=0,l=0,m=0;
   bool solf=false;
   vector<int> p;
   for(int i=0;i<A.length();i++){
    char c=A[i];
    diff+=(c=='0')?1:-1;
    if(diff<0){
        diff=0;
        start=(c=='0')?i:i+1;
    }
    else{
        if(max<diff){
            max=diff;
            l=start+1;
            m=i+1;
            solf=true;
        }
    }
   }

   if(!solf)
    return p;
   p.push_back(l);
   p.push_back(m);
   return p;
}
int main()
{
    string s="0111000100010";
    vector<int> p=flip(s);
    if(p.size()==2)
     cout<<p[0]<<" "<<p[1];
}

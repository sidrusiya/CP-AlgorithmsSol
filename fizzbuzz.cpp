#include<iostream>
using namespace std;
#include<vector>
void fb(int A){
   vector<string> V;
   for(int i=1;i<=A;i++){
    if(i%3==0){
        V.push_back("Fizz");
    }
    else if(i%5==0){
        V.push_back("Buzz");
    }
    else
        V.push_back(to_string(i));
    cout<<V[i-1]<<" ";
   }
}
int main(){
int n;
cin>>n;
fb(n);
}

#include<iostream>
using namespace std;
void fun()
{
    throw 10;
}
int main()
{
cout<<"Welcome"<<endl;
 try{
 fun();
 cout<<"try";
 }
 catch(...){
 cout<<"Exeception";
 }
 cout<<"last line";
 }

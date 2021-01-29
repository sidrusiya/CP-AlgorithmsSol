#include<iostream>
#include<string.h>
using namespace std;
class emp
{
   int salary;
   char name[20];
   public:
   emp(int s,char p[])
   {
       salary=s;
       strcpy(name,p);
   }
   ~emp()
   {
       cout<<salary<<" is salary and "<<name<<" is emp name."<<endl;
   }
};
int main()
{
    char s1[5]="ram",s2[4]="pam";
    emp ob[2]={emp(1,s1),emp(2,s2)};
    return 0;
}

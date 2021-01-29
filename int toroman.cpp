#include<iostream>
#include<string>
using namespace std;
 string intToRoman(int num) {
    string a="GMDCLXVI";
    int b[]={5000,1000,500,100,50,10,5,1};
    string s;
    for(int i=1;i<8;i+=2)
    {
        if((num/b[i]<4&&num/b[i]>=0)||(num/b[i]<9&&num/b[i]>=5))
        {
            if(num/b[i-1]==1)
                s+=a[i-1];
            for(int j=0;j<((num/b[i])%5);j++)
                s+=a[i];
        }
        else if(num/b[i]==4||num/b[i]==9)
                {
                    s=+a[i];
                    if(num/b[i-1]==0)
                        s+=a[i-1];
                    else
                        s+=a[i-2];
                }
        num=num % b[i];
        }

        return s;
        }
        int romanToInt(string s) {
        int num=0,i=0;
        map<char, int> umap;
        umap['I']=1;
        umap['V']=5;
        umap['X']=10;
        umap['L']=50;
        umap['C']=100;
        umap['D']=500;
        umap['M']=1000;
        while(s[i]!='\0')
        {
            if(umap[s[i+1]]<=s[i]||s[i+1]=='\0')
                num+==umap[s[i]];
            else
               num-=umap[s[i]];
        }
        return num;
    }
int main()
{
cout<<romanToInt("XXX");
}


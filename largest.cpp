#include<iostream>
using namespace std;
#include<vector>
#include<string>
void merge(vector<int> &arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    vector<int> L,R;
    for (i = 0; i < n1; i++)
        L.push_back(arr[l + i]);
    for (j = 0; j < n2; j++)
        R.push_back(arr[m + 1+ j]);
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        string s1=to_string(L[i]);
        string s2=to_string(R[i]);
        string s3=to_string(L[i]);
        string s4=to_string(R[i]);
        s1.append(s2);
        s4.append(s3);
        cout<<s1.end();
        if (1)
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(vector <int> &arr, int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
string largest(vector<int> &A){
   int n=A.size();
   int p=0;
   for(int i=0;i<n;i++){
        if(A[i]!=0){p=1;break;}
   }
   if(p==0) return "0";
   mergeSort(A,0,n-1);
   string s;
   for(int i=0;i<n;i++){
       s.append(to_string(A[i]));
   }
  return s;
}
int main(){
  vector<int> A={8,89};
  cout<<largest(A);
}

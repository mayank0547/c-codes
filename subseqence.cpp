// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void f(int a[],int n,vector<int> &v,int ind){
  if(ind==n){
      for(auto it :v)
         cout<<it<<" ";
     cout<<endl;
     return ;
  }
  v.push_back(a[ind]);
  f(a,n,v,ind+1);
  v.pop_back();
  f(a,n,v,ind+1);
}
int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
     cin>>arr[i];
   vector<int> v;
   f(arr,n,v,0);
    return 0;
}
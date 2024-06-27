// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &v,int low,int mid,int high){
    vector<int> tmp;
    int l=low,r=mid+1;
    while(l<=mid&&r<=high){
       if(v[l]<=v[r]){
           tmp.push_back(v[l]);
           l++;
       }
       else{
           tmp.push_back(v[r]);
           r++;
       }
    }
    while(l<=mid){
        tmp.push_back(v[l]);
           l++;
    }
    while(r<=high){
        tmp.push_back(v[r]);
           r++;
    }
    for(int i=low;i<=high;i++){
        v[i]=tmp[i-low];
    }
}
void mergesort(vector<int> &v,int low,int high){
    
    if(low==high) return ;
    int mid=(low+high)/2;
    mergesort(v,low,mid);
    mergesort(v,mid+1,high);
    merge(v,low,mid,high);
    //return v;
}

int main() {
   int n;
   cin>>n;
   vector<int> v1;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       v1.push_back(x);
   }
   mergesort(v1,0,n-1);
   for(int i=0;i<n;i++){
       cout<<v1[i]<<" ";
   }

    return 0;
}
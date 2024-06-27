// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void f(vector<vector<int>> &v,vector<int> arr,int n,int i){
    if(i==n){
        v.push_back(arr);
        return ;
        
    }
    for(int j=i;j<n;j++){
        swap(arr[i],arr[j]);
        f(v,arr,n,i+1);
        
    }
    
}

int main() {
    int n;
    cin>>n;
    //vector<int> arr(n+1,0);
   // vector<int> v1;
   vector<int> arr(n);
   for(int i=0;i<n;i++) arr[i]=i+1;
    vector<vector<int>> v;
    f(v,arr,n,0);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}












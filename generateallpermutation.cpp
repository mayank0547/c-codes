// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void f(vector<vector<int>> v,vector<int> v1,vector<int> &arr,int n){
    if(v1.size()==n){
        v.push_back(v1);
        return ;
        
    }
    for(int i=1;i<=n;i++){
        if(arr[i]==0){
            v1.push_back(i);
            arr[i]=1;
            f(v,v1,arr,n);
            v.pop_back();
            arr[i]=0;
        }
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n+1,0);
    vector<int> v1;
    vector<vector<int>> v;
    f(v,v1,arr,n);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
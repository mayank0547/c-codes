// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void f(vector<vector<int>> &v,vector<int> v1,int i,int k){
    if(v1.size()==k) {
        v.push_back(v1);
        return ;
    }
    if(i==0){
        v1.push_back(1);
        f(v,v1,i+1,k);
        v1.pop_back();
        v1.push_back(0);
        f(v,v1,i+1,k);
    }
    else{
        if(v1[i-1]==1){
            v1.push_back(0);
            f(v,v1,i+1,k);
        }
        else{
            v1.push_back(1);
            f(v,v1,i+1,k);
            v1.pop_back();
            v1.push_back(0);
            f(v,v1,i+1,k);
        }
    }
}

int main() {
    int k;
    cin>>k;
    vector<vector<int>> v;
    vector<int> v1;
    f(v,v1,0,k);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}
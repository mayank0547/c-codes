#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    long long sum=0,x;
    cin>>n>>q;
    vector<long long > v;
    v.push_back(0);
    for(int i=1;i<=n;i++){
        cin>>x;
        sum+=x;
        v.push_back(sum);
    }
    for(int i=0;i<q;i++){
        int m,n;
        cin>>m>>n;
        cout<<v[n]-v[m-1]<<endl;
    }
    return 0;
}
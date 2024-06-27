#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p=0;
    cin>>n;
    long long ans=0;
    map<long long, int> a;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        a[x]++;
    }
    long long t;
    for(auto it: a){
        p+=it.second;
        if(p>=(n+1)/2){
            t=it.first;
            break;
        }
    }
    for(auto it: a){
        ans+=abs(it.first-t)*it.second;
    }
    cout<<ans;
}
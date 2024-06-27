#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    long long  lo=0,hi=INT_MAX,mid,ans=-1;
    while(hi>=lo){
        mid=(lo+hi)/2;
        int temp=mid*mid;
        if(temp==x){
            ans=mid;
            break;
        }
        else if(temp<x){
            lo=mid+1;
        }
        else
         hi=mid-1;
    }
    cout<<ans;
}
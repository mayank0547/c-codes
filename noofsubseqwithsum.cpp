// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int f(int ind ,int a[],vector<int > &v,int s,int sum,int n){
    if(ind==n){
        if(s==sum){
            
            return 1;
        }
        return 0;
    }
    v.push_back(a[ind]);
    s+=a[ind];
    int l=f(ind+1,a,v,s,sum,n);
    s-=a[ind];
    v.pop_back();
   int r=f(ind+1,a,v,s,sum,n);
    return l+r;
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> v;
    int sum;
    cin>>sum;
    int ans;
    ans=f(0,a,v,0,sum,n);
    cout<<ans<<endl;

    return 0;
}
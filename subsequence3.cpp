// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
bool f(int ind ,int a[],vector<int > &v,int s,int sum,int n){
    if(ind==n){
        if(s==sum){
            for(auto it : v){
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }
        return false;
    }
    v.push_back(a[ind]);
    s+=a[ind];
    if(f(ind+1,a,v,s,sum,n)==true) return true;
    s-=a[ind];
    v.pop_back();
   if( f(ind+1,a,v,s,sum,n)==true) return true;
    return false;
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
    f(0,a,v,0,sum,n);

    return 0;
}
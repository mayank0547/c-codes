// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void f(int ind ,int a[],vector<int > &v,int s,int sum,int n){
    if(ind==n){
        if(s==sum){
            for(auto it : v){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return ;
    }
    v.push_back(a[ind]);
    s+=a[ind];
    f(ind+1,a,v,s,sum,n);
    s-=a[ind];
    v.pop_back();
    f(ind+1,a,v,s,sum,n);
    
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
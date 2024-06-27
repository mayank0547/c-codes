// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum=0,n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l,r,q;
    cin>>q;
    int a[n+1]={0};
    while(q--){
       cin>>l>>r>>x;
       a[l]+=x;
       a[r+1]-=x;
    }
    for(int i=0;i<n;i++){
        a[i]+=sum;
        sum=a[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]+a[i]<<" ";
    }
  

    return 0;
}
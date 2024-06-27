#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,sum=0;
    cin>>n>>m;
    int arr[n],e1=INT_MIN,e2;
    for(int i=0;i<n;i++)
       cin>>arr[i];
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            if(sum%m==0){
               e2=j-i+1;
               if(e2>e1)
                e1=e2;
            }
            sum=0;
        }
    }
    cout<<e1;
    return 0;
}
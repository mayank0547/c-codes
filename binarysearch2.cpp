#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)
     cin>>arr[i];
    int lo=0,hi=n,mid,ans=-1;
    while(hi>=lo){
        mid=(lo+hi)/2;
       if(arr[mid]==x){
          ans=mid;
          break;
       }
       else if(arr[mid]>x){
         hi=mid-1;
       }
       else 
         lo=mid+1;
    }
    cout<<ans;
    return 0;

}
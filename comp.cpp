#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,a,k;
   cin>>n;
   cin>>a;
   int arr[n];
   long sum=0,sum1=0,sum2=0;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int brr[n];
   for(int i=0;i<n;i++){
    brr[i]=arr[i];
    sum1+=arr[i];
   }
   for(int i=0;i<n;i++){
       for(int j=i ;j<n;j++){
           for( k=i;k<=j;k++){
             if(arr[k]<a){
                 sum++;
                }}
           
           if(sum==j-i+1){
            for(k=i;k<=j;k++)
             arr[k]=a;
              for(int i=0;i<n;i++){
            sum2+=arr[i];
            }
           
           if(sum2>sum1){
            sum1=sum2;
             }
            sum2=0;
           for(int i=0;i<n;i++){
            arr[i]=brr[i];
           }
           }
           sum=0;   
       }
   }
   cout<<sum1;
  return 0; 
}
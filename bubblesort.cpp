#include<iostream>
using namespace std;
int main(){
      int n;
      cin>>n;
      int arr[n],temp;
      for(int i=0;i<n;i++)
         cin>>arr[i];
      for(int i=n;i>1;i--){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
            }
        }
      }
      cout<<"the new sorted array is"<<endl;
      for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";
    return 0;
   }




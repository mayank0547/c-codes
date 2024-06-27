#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],temp;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"the sorted array is "<<endl;
    for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
     return 0;sdf
}
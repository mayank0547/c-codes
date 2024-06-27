#include<iostream>
using namespace std;
int main(){
    int k;
    cout<<"enter the size of array ";
    cin>>k;
    int ar[k];
    cout<<"enter the array ";
    for(int i=0;i<k;i++)
      cin>>ar[i];
    int n;
    cout<<"\n enter the value of n ";
    cin>>n;
    int p;
    for(int i=n;i<k;i++){
        p=ar[i];
        ar[i]=ar[i-n];
        ar[i-n]=p;
    }
    for(int i=k-n;i<=(2*k-n)/2;i++){
        p=ar[i];
        ar[i]=ar[i+n/2];
        ar[i+n/2]=p;
    }
    cout<<"\n new array is \n";
    for(int i=0;i<k;i++)
    cout<<ar[i]<<" ";
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of terms in the fibbonacci \n";
    cin>>n;
    int a[n];
    a[0]=0;a[1]=1;
    for(int i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];
    }cout<<endl;
    for(int j=0;j<n;j++)
    cout<<a[j]<<" ";
    return 0;
}
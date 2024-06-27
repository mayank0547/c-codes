#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl;
    int b,t,flag;
    for(int j=0;j<n;j++){
        b=a[j];
        for(int k=0;k<j;k++){
            if(b==a[k]){
                t=k;
                flag=1;
                break;
            }
        }
        if(flag==1)
        break;
    }
    cout<<t<<"   "<<b;
    return 0;
}
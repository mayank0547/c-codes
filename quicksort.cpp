// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int func(vector<int> &a ,int low,int high){
    int i=low;
    int j=high;
    while(i<j){
        while(a[i]<=a[low]&&i<high){
            i++;
        }
        while(a[j]>=a[low]&&j>low){
            j--;
        }
        if(i>=j){
            swap(a[j],a[low]);
        }
        else{
            swap(a[i],a[j]);
        }
    }
    return j;
}
void qs(vector<int> &a,int low,int high){
    if(low<high){
        int pi=func(a,low,high);
        qs(a,low,pi-1);
        qs(a,pi+1,high);
    }
    else
      return ;
}
int main() {
    int n;
    cin>>n;
    vector<int> a;
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    qs(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
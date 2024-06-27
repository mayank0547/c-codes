#include <iostream>
#include<climits>
using namespace std;
int main() {
int n, A[n],s;
cin>>n;
int maxSum=INT_MIN;
for(int i=0;i<n;i++){
    cin>>A[i];
}
for(int i=0;i<n;i++){
     s=0;
    for(int j=0;j<n;j++){
       if(A[i]==A[j]){
           s++;
       }
  
    }
    maxSum=max(maxSum,s);
}
cout<<maxSum;

    return 0;
}
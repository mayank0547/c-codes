#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int c=0;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            if(a==k)
             c++;
            else 
             c++;
        }
        if(c>=2)
         cout<<"YES"<<endl;
        else 
         cout<<"NO"<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,r;
        cin>>n>>s>>r;
        int n1=(r/(n-1));
        vector <int> v(n,n1);
        v[0]=s-r;
        int z=v[0]-v[1];
        if(z==0){
            for(int i=0;i<n;i++)
           cout<<v[i]<<" ";
        cout<<endl;
         continue;
        }
        int x=r-((n-1)*v[1]);
        int y=x/z;
        if(x%z==0){
            for(int i=1;i<=y;i++){
                v[i]+=z;
            }
        }
        else {
             for(int i=1;i<=y;i++){
                v[i]+=z;
            }
            v[y+1]+=x-(y*z);
        }
        for(int i=0;i<n;i++)
           cout<<v[i]<<" ";
        cout<<endl;
        
         

    }
    return 0;
}
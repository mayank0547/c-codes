#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n][n-1];
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                cin>>ar[i][j];
            }
        }
        int a,b,c=0;
      vector<int> v;
            a=ar[0][0];
            for(int i=0;i<n;i++){
               if(ar[i][j]==a)
                 c++;
                else 
                 b=ar[i][j];
            }
            if(c>n/2){
             v.push_back(a);
              v.push_back(b);
            }
            else{
                 v.push_back(b); 
                 v.push_back(a);
            }a=b;
            for(int j=1;j<n-1;j++ ){
                for(int i=0;i<n;i++){
                    if(ar[i][j]!=a){
                        b=ar[i][j];
                    }
                }
                v.push_back(b);
                a=b;
            }
            for(auto &it: v){
                cout<<it<<" ";
            }
            cout<<endl;
        
    
         
        
        
        
    }
}
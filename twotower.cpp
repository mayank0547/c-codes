#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s1,s2;
        cin>>s1>>s2;
        int c1=0,c2=0;
        for(int i=0;i<n-1;i++){
              if(s1[i]==s1[i+1])
               c1++;
        }
        for(int i=0;i<m-1;i++){
              if(s2[i]==s2[i+1])
               c2++;
        }
        if(c1+c2==0)
         cout<<"YES"<<endl;
        else if(c1+c2==1){
            if(s1[n-1]==s2[m-1])
              cout<<"NO"<<endl;
            else 
              cout<<"YES"<<endl;
        }
        else
          cout<<"NO"<<endl;
    }
    return 0;
}
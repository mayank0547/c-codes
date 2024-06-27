#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n;
        string s=to_string(n);
        for(int i=0;i<s.size();i++){
            if(s[i]!=0){
                d=i;
                break;
            }
        }
        int nod=s.size()-d;
        int ans=(nod-1)*9+(n/pow(10,nod-1));
        cout<<ans<<endl;
    }
    return 0;
}
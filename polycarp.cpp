#include<bits/stdc++.h>
using namespace std;
//#define pi "3141592653589793238462643383279"
int main(){
    int t;
    cin>>t;
    string piv="3141592653589793238462643383279";
    while(t--){
       string s;
       cin>>s;
       int count =0;
       for(int i=0;i<s.size();i++){
          if(s[i]==piv[i]){
            count++;
          }
          else 
            break;
       }
       cout<<count<<endl;
    }
}
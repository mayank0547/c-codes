#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p,q;
    cin>>s;
    int noa=0,lola=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'){
            noa++;
            lola=i+1;
        }
    }
    int t=0;
    while(lola<=s.size()){
    if(s.size()==lola+lola-noa){
        
       for(int i=0;i<lola;i++){
        if(s[i]!='a')
          p+=s[i];
       }
       for(int i=lola;s[i]!='\0';i++){
          q+=s[i];
       }
       if(p==q){
         for(int i=0;i<lola;i++){
            cout<<s[i];
         }
         t=1;
         
       } break;
      
    }
    else 
     lola++;
    }
    if(t==0)
     cout<<":(";
    return 0;
}
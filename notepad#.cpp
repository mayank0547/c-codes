#include<bits/stdc++.h>
using namespace std;
int main(){
     long long int t;
    cin>>t;
    while(t--){
        long long int size;
        cin>>size;
        string s,p;
        cin>>s;
       long long int c=0;
        bool flag=0;
        for(long long int i=0;i<size;i++){
            for(int j=0;j<p.size();j++){
                if(s[i]==p[j])
                  flag=1;
            }
            if(flag==0){
                c++;
                p+=s[i];
            }
            else{int k=i;  
                for(long long int j=0;j<i;j++){
                    if(s[i]==s[j]){
                        while(flag==1){
                            if(s[i+1]==s[j+1]){
                                if(j+1<k&&i+1<size){
                                i++;
                                j++;}
                                else
                                  flag=0;
                            }
                            else
                                flag=0;
                                
                        }
                        

                    }
                }
                
                c++;
            }
            flag=0;
        }
        if(c<size)
          cout<<"YES"<<endl;
        else
          cout<<"NO"<<endl;
    }
    return 0;
}
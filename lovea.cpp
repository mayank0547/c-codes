#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int noa=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='a')
          noa++;
    }
    if(s.size()<2*noa)
      cout<<s.size();
    else 
      cout<<(2*noa)-1;
    return 0;
}
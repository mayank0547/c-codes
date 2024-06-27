#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
       string a;
       long long b;
       cin>>a>>b;
       int x=a.size();
       int y=a[x-1]-0;
       int p=(y*y)%10;
       int count=2;
       while(p!=y){
           p=(p*y)%10;
           count++;
       }
       int k=b%p;
       y=int(pow(y,k));
       y%=10;
       cout<<y<<endl;
       
    }

    return 0;
}
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin>>n>>q;
   vector< int> l(n),r(n);
    for(int i=0;i<n;i++){
        cin>>l[i]>>r[i];
        
    }
    sort(l.begin(),l.end());
    sort(r.begin(),r.end());
    vector<int> :: iterator it1,it2;
    for(int i=0;i<q;i++){
        int x,y;
        cin>>x>>y;
        it1=upper_bound(r.begin(),r.end(),x);
        it2=upper_bound(l.begin(),l.end(),y);
        cout<<n-((it1-r.begin()-1)+(n-(it2-l.begin())))<<endl;
    }

    return 0;
}
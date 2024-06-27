#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> x1,pair<int,int> x2){
    if(x1.first+(2*x1.second)>=x2.first+(2*x2.second))
     return 1;
    return 0;
}
int main(){
    int n;
    cin>>n;
   vector< pair<int,int>> a;
   int x,y;

    for(int i=0;i<n;i++){
        cin>>x>>y;
        a.push_back({x,y});
    }
    sort(a.begin(),a.end(),comp);
    for(int i=0;i<n;i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;;
    }

}
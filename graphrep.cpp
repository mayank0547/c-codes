#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
     vector<vector<int>> adj(n + 1, vector<int>(n + 1, 0));
     vector<vector<pair<int,int>>> adj_list(n+1);
     for(int i=0;i<m;i++){
        int a,b,wt;
        cin>>a>>b>>wt;
        adj[a][b]=wt;
        adj[b][a]=wt;
        adj_list[a].push_back({b,wt});
        adj_list[b].push_back({a,wt});
     }
     cout<<"\n the adjency matrix is \n";
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
     }
     cout<<" the adjency list is \n";
     for(int i=1;i<=n;i++){
        cout<<i<<" -> ";
        for(int j=0;j<adj_list[i].size();j++){
            cout<<"{"<<adj_list[i][j].first<<","<<adj_list[i][j].second<<"}"<<" ";
        }
        cout<<endl;
     }
     int vis[n+1]={0};
     queue<int> q;
     vis[1]=1;
     q.push(1);
     vector<int> bfs;
     while(!q.empty()){
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it: adj_list[node]){
              if(vis[it.first]!=1){
                vis[it.first]=1;
                q.push(it.first);
                
              }
        }
     }
     cout<<" the bfs of the following graph is \n";
     for(auto i:bfs){
        cout<<i<<" ";
     }
     return 0;
}
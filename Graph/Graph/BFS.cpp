#include<iostream>
#include<vector>
#include<queue>
using namespace std;


void bfs(int start,vector<vector<int>> adj,vector<bool> &vis){
queue<int> q;
q.push(start);
vis[start]=true;

while(!q.empty()){
int node=q.front();
q.pop();

cout<<node<<" ";

for(int neighbour:adj[node]){
if(!vis[neighbour]){
q.push(neighbour);
vis[neighbour]=true;
}
}
}
}
int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> adj(n+1);
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> vis(n+1,false);

    int start;
    cin>>start;

    bfs(start,adj,vis);
    return 0;

}
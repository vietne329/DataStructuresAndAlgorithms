
#include<bits/stdc++.h>
/* */
/* */ using namespace std;
/* */ int N, M;
/* */ int pre[1001];
/* */ vector<int> adj[1001];
/* */ int u, v;
/* */
/* */ void DFS(int u){
/* */ for(int i=0;i<adj[u].size();i++)
/* */ if(pre[adj[u][i]]==0){
/* */ pre[adj[u][i]]=u;
/* */ DFS(adj[u][i]);
/* */ }
/* */ }
/* */
/* */ int main(){
/* */ int t;
/* */ cin>>t;
/* */ while(t--){
/* */ cin>>N>>M>>u>>v;
/* */ for(int i=1;i<=N;i++){
/* */ adj[i].clear();
/* */ pre[i]=0;
/* */ }
/* */ for(int i=1;i<=M;i++){
/* */ int a, b;
/* */ cin>>a>>b;
/* */ adj[a].push_back(b);
/* */ adj[b].push_back(a);
/* */ }
/* */ pre[u]=u;
/* */ DFS(u);
/* */ if(pre[v]==0)
/* */ cout<<"-1"<<endl;
/* */ else{
/* */ int sc=1;
/* */ while(pre[v]!=u){
/* */ v=pre[v];
/* */ sc++;
/* */ }
/* */ cout<<sc<<endl;
/* */ }
/* */ }
/* */ return 0;
/* */ }
/* */
/* */ 


#include<bits/stdc++.h>
#define ll long long
/* */ using namespace std;
/* */ int N, M;
/* */ vector<vector<int> > adj;
/* */ bool visited[1001];
/* */
/* */ void TPLT_DFS(int u){
/* */ cout<<u<<" ";
/* */ visited[u]=true;
/* */ for(int i=0;i<adj[u].size();i++)
/* */ if(!visited[adj[u][i]])
/* */ TPLT_DFS(adj[u][i]);
/* */ }
/* */
/* */ int main(){
/* */ ios_base::sync_with_stdio(false);
/* */ cin.tie(NULL);
/* */ int t;
/* */ cin>>t;
/* */ while(t--){
/* */ cin>>N>>M;
/* */ adj.clear();
/* */ adj.resize(N+1);
/* */ for(int i=1;i<=N;i++){
/* */ visited[i]=false;
/* */ }
/* */
/* */ for(int i=1;i<=M;i++){
/* */ int a, b;
/* */ cin>>a>>b;
/* */ adj[a].push_back(b);
/* */ adj[b].push_back(a);
/* */ }
/* */ for(int i=1;i<=N;i++)
/* */ if(!visited[i]){
/* */ TPLT_DFS(i);
/* */ cout<<endl;;
/* */ }
/* */ }
/* */ return 0;
/* */ }

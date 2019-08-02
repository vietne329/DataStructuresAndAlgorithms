
#include<bits/stdc++.h>

using namespace std;

/* */ vector<vector<int> > adj;
/* */ vector<bool> visited;
/* */ int N;
/* */
/* */ bool checkLienThong(){
/* */ for(int i=1;i<=N;i++)
/* */ if(!visited[i])
/* */ return false;
/* */ return true;
/* */ }
/* */ void DFS(int a){
/* */ stack<int> s;
/* */ s.push(a);
/* */ visited[a]=true;
/* */ while(!s.empty()){
/* */ int t=s.top();s.pop();
/* */ for(int i=0;i<adj.at(t).size();i++)
/* */ if(!visited[adj.at(t).at(i)]){
/* */ visited[adj.at(t).at(i)]=true;
/* */ s.push(t);
/* */ s.push(adj.at(t).at(i));
/* */ break;
/* */ }
/* */ }
/* */ }
/* */ int main(){
/* */ int t;
/* */ cin>>t;
/* */ while(t--){
/* */ cin>>N;
/* */ adj.clear();
/* */ adj.resize(N+1);
/* */ visited.resize(N+1);
/* */ for(int i=1;i<=N;i++)
/* */ visited.at(i)=false;
/* */ for(int i=1;i<N;i++){
/* */ int a, b;
/* */ cin>>a>>b;
/* */ adj.at(a).push_back(b);
/* */ adj.at(b).push_back(a);
/* */ }
/* */ DFS(1);
/* */ if(checkLienThong())
/* */ cout<<"YES"<<endl;
/* */ else
/* */ cout<<"NO"<<endl;
/* */ }
/* */ return 0;
/* */ }
/* */
/* */ 

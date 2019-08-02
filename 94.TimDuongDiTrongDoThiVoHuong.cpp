// Bai 94
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
int n,m;
void DFS(int u,int v,vector<int> V[]){
	stack<int> S;
	S.push(u);
	vector< vector<int> > check(n+1,vector<int>(n+1,1));
	while(!S.empty()){
		int top = S.top(); S.pop();
		for(int i=0;i<V[top].size();i++){
			if(check[top][V[top][i]]){ 
				check[top][V[top][i]] = 0;
				check[V[top][i]][top] = 0;
				S.push(V[top][i]);
				if(V[top][i]==v){
					cout << "YES" << endl;
					return;
				}
			}
		}
	}
	cout << "NO" << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		vector<int> V[n+1];
		for(int i=1;i<=m;i++){
			int u,v;
			cin >> u >> v;
			V[u].push_back(v);
			V[v].push_back(u);
		}
		int k;
		cin >> k;
		while(k--){
			int u,v;
			cin >> u >> v;
			DFS(u,v,V);
		}
	}
}

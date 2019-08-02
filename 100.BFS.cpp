// Bai 100
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
int n,m;
void BFS(int u,vector<int> V[]){
	queue<int> S;
	int dem = 0;
	S.push(u);
	vector< int> check(n+1,1);
	check[u] = 0;
	cout << u << " ";
	while(!S.empty()){
		int top = S.front(); S.pop();
		for(int i=0;i<V[top].size();i++){
			if(check[V[top][i]]){ 
				check[V[top][i]] = 0;
				cout << V[top][i] <<" ";
				S.push(V[top][i]);
			}
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int u;
		cin >> n >> m >> u;
		vector<int> V[n+1];
		for(int i=1;i<=m;i++){
			int u,v;
			cin >> u >> v;
			V[u].push_back(v);
			V[v].push_back(u);
		}
		BFS(u,V);
	}
}

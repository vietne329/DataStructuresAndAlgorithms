// Bai 95
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
int n;
void DFS(int u,vector<int> V[]){
	stack<int> S;
	int dem = 0;
	S.push(u);
	vector< int> check(n+1,1);
	check[u] = 0;
	while(!S.empty()){
		int top = S.top(); S.pop();
		for(int i=0;i<V[top].size();i++){
			if(check[V[top][i]]){ 
				check[V[top][i]] = 0;
				S.push(V[top][i]);
				dem++;
			}
		}
	}
	if(dem==n-1) cout << "YES" << endl;
	else cout << "NO" << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		vector<int> V[n+1];
		for(int i=1;i<=n-1;i++){
			int u,v;
			cin >> u >> v;
			V[u].push_back(v);
			V[v].push_back(u);
		}
		DFS(1,V);
	}
}

// Bai 101
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <string.h>
using namespace std;
int n,m,check[100003];
void DFS(int u,vector<int> V[],int check[]){
	cout << u << " ";
	check[u] = 0;
	for(int i=0;i<V[u].size();i++){
		int v = V[u][i];
		if(check[v]){
			DFS(v,V,check);
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
		memset(check,1,sizeof(check));
		DFS(u,V,check);
		cout << endl;
	}
}

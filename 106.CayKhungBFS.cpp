#include<bits/stdc++.h>

using namespace std;

int n,m,u,dd[10007];
vector<int> ke[10007];
typedef pair<int,int> II;
void BFS(int x){
	queue<int>q;
	vector<II> T;
	q.push(x);
	dd[x] = 1;
	while(!q.empty()){
		x = q.front();
		q.pop();
		for(int i = 0;i < ke[x].size();i++){
            int y = ke[x][i];
			if(dd[y]==0){
				q.push(y);
				dd[y]=1;
				T.push_back(make_pair(x,y));
			}
		}
	}
	if(T.size() < n - 1) cout << -1 << endl;
	else {
		for(int i = 0;i < T.size();i++)
			cout << T[i].first << " " << T[i].second<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m>>u;
		for(int i=1;i<=n;i++){
			dd[i]=0;
			ke[i].clear();
		}
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		BFS(u);
	}
}

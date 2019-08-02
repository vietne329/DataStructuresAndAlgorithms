// Bai 93
#include <bits/stdc++.h>
using namespace std;
char a[200][200];
int check[200][200];
int n,m;
typedef pair<int,int> ii;
int doc[]={1,1,1,0,0,-1,-1,-1};
int ngang[]={-1,0,1,-1,1,-1,0,1};
void Find(int i,int j){
	queue<ii> Q;
	Q.push(ii(i,j));
	while(!Q.empty()){
		ii top = Q.front(); Q.pop();
		for(int k=0;k<8;k++){
			int xx = top.first + doc[k];
			int yy = top.second + ngang[k];
			if(xx>0&&xx<=n&&yy>0&&yy<=m &&check[xx][yy]){
				check[xx][yy] = 0;
				Q.push(ii(xx,yy));
			}
		}
	}
}
int main(){
	cin >> n >> m;
	memset(check,0,sizeof(check));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin >> a[i][j];
			if(a[i][j]=='W'){
				check[i][j] = 1;
			}
		}
	}
	int dem = 0;	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(check[i][j]==1){
				dem++;
				check[i][j] = 0;
				Find(i,j);
			}
		}
	}
	cout << dem << endl;
}

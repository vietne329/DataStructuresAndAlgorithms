#include<iostream>
#include<queue>
using namespace std;
struct pack{
	int i,j;
	int dem;
};
queue<pack> MyQueue;
char a[200][200];
bool check[200][200];
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
			if(a[i][j]=='X') check[i][j] = true;
		}
	}
	int x,y,u,v;
	cin >> x >> y >> u >> v;
	check[x][y] = true;
	MyQueue.push({x,y,0});
	while(!MyQueue.empty()){
		pack Q = MyQueue.front();
		int i = Q.i, j = Q.j;
		MyQueue.pop();
		for(int k=1;k+i<n;k++){
			if(!check[i+k][j]){
				check[i+k][j] = true;
				MyQueue.push({i+k,j,Q.dem+1});
				if(i+k==u&&j==v){
					cout << Q.dem+1;
					return 0;
				}
			}
			else break;
		}
		for(int k=1;i-k>=0;k++){
			if(!check[i-k][j]){
				check[i-k][j] = true;
				MyQueue.push({i-k,j,Q.dem+1});
				if(i-k==u&&j==v){
					cout << Q.dem+1;
					return 0;
				}
			}
			else break;
		}
		for(int k=1;k+j<n;k++){
			if(!check[i][j+k]){
				check[i][j+k] = true;
				MyQueue.push({i,j+k,Q.dem+1});
				if(i==u&&j+k==v){
					cout << Q.dem+1;
					return 0;
				}
			}
			else break;
		}
		for(int k=1;j-k>=0;k++){
			if(!check[i][j-k]){
				check[i][j-k] = true;
				MyQueue.push({i,j-k,Q.dem+1});
				if(i==u&&j-k==v){
					cout << Q.dem+1;
					return 0;
				}
			}
			else break;
		}		
	}
}

#include<bits/stdc++.h>
using namespace std;
int T[1003][1003],n,m;
void process(){
	memset(T,0,sizeof(T));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int a; 
			cin >> a;
			if(i==1&&j==1) 
				T[i][j] = a;
			else if(i==1) 
				T[i][j] = T[i][j-1] + a;
			else if(j==1) 
				T[i][j] = T[i-1][j] + a;
			else {
				T[i][j] = min(T[i][j-1],min(T[i-1][j-1],T[i-1][j])) + a;
			}
		}
	}
	cout << T[n][m] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		process();
	}
}

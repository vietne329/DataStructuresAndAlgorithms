#include<bits/stdc++.h>
using namespace std;
long MOD = 1e9 + 7;

void Solve(){
	int n,k;
	cin >> n >> k;
	vector< vector<int> > C(n+1,vector<int>(n+1,0));
	for(int i=0;i<=n;i++){
		for(int j=0;j<=i;j++){
			if(i==j||j==0)
				C[i][j] = 1;
			else
				C[i][j] = (C[i-1][j-1]+C[i-1][j])%MOD;
		}
	}
	cout << C[n][k] << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		Solve();
	}
}

#include <bits/stdc++.h>
using namespace std;

const long long base = 1e9 + 7;

int DP[5001][5001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while (t--){
		int n, k;
		cin>>n>>k;
		for (int i=1; i<=k; i++){
			if (i<10) DP[1][i]=1;
			else DP[1][i]=0;
		}
		for (int i=2; i<=n; i++){
			for (int j=1; j<=k; j++){
				DP[i][j]=0;
			}
		}
		for (int i=2; i<=n; i++){
			for (int j=1; j<=k; j++){
				for (int ii=0; ii<=9 && ii<=j; ii++){
					DP[i][j] = (DP[i][j] + DP[i-1][j-ii]) % base;
				}
			}
		}
		cout<<DP[n][k]<<endl;
	}
	return 0;
}



#include <bits/stdc++.h> 

using namespace std; 
int MOD = 1e9+7,res[100002];
int solve(int N, int K) { 
	res[0] = 1, res[1] = 1;
	for(int i=2;i<=N;i++){
		res[i] = 0;
		for(int j=1;j<=K&&j<=i;j++){
			res[i] = (res[i]+ res[i-j])%MOD;
		}
	}
	return res[N-1];
	
}  
int main() { 
	int t;
	cin >> t;
	while(t--){
		int N,K;
		cin >> N >> K;
		cout << solve(N+1, K) << endl;
	} 
	return 0; 
} 


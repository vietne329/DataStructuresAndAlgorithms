#include <bits/stdc++.h>
using namespace std;


int main(){
	long long c, n;
	cin >> c >> n;
	vector<long long> A(n+1);
	for(int i=1;i<=n;i++) cin >> A[i];
	vector<vector<long long> > F(n+1,vector<long long>(c+1,0));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=c;j++){
			if(A[i]<=j){
				F[i][j] = max(F[i-1][j],F[i-1][j-A[i]]+A[i]);
			}
			else F[i][j] = F[i-1][j];
		}
	}
	cout << F[n][c];
}

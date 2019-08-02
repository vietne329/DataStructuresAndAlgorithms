#include <bits/stdc++.h>
using namespace std;
int n,k,S=0;
int Asb(int x){
	return (x>0) ? x : (x + k);
}
int main(){
	cin >> n >> k;
	vector<int> A(n+1);
	for(int i=1;i<=n;i++){
		cin >> A[i];
		A[i]%=k;
		S += A[i];
	}
	S%=k;
	vector< vector<int> > F(n+1,vector<int>(k+1,0));
	for(int i=1;i<k;i++) F[0][i] = 1e9;
	
	for(int i=1;i<=n;i++){
		for(int j=0;j<k;j++){
			F[i][j] = min(F[i-1][j],F[i-1][Asb(j-A[i])]+1);
		}
	}
	cout << n-F[n][S%k];
}	


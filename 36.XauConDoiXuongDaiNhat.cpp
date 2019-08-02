#include <bits/stdc++.h>
using namespace std;

int DP[5001][5001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while (t--){
		string s;
		cin>>s;
		s = '0' + s;
		int n = s.length();
		for (int i=1; i<n; i++){
			for (int j=i+1; j<n; j++) DP[i][j]=0;
		}
		for (int i=1; i<n; i++) DP[i][i]=1;
		for (int i=n-1; i>=1; i--){
			for (int j=i+1; j<n; j++){
				if (s[i]==s[j]) {
					if (DP[i+1][j-1]>=(j-i-1)) DP[i][j] = DP[i+1][j-1]+2;
				}
				else DP[i][j] = 1;
			}
		}
		int kq = -1;
		for (int i=1; i<n; i++){
			for (int j=i; j<n; j++) {
				if (DP[i][j]>kq) {
					kq = DP[i][j];
				}
			}
		}
//		for (int i=1; i<n; i++){
//			for (int j=1; j<n; j++) cout<<DP[i][j];
//			cout<<endl;
//		}
		cout<<kq<<endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
int n,S;
void Solve(){
	vector<int> A(n+1);
	for(int i=1;i<=n;i++) cin >> A[i];
	vector<int> F(S+1);
	F[0] = 1;
	for(int i=1;i<=n;i++){
		for(int j=S;j>=i;j--){
			if(F[j-A[i]]){
				F[j] = 1;
				if(j==S){
					cout << "YES";
					return;
				}
			}
		}
	}
	cout << "NO";
}
int main(){
	cin >> n >> S;
	Solve();
}

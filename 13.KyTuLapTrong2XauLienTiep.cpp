#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, ans = INT_MAX;
	cin >> n;
	string *S = new string[n+1];
	for(int i=1;i<=n;i++) cin >> S[i];
	sort(S+1,S+1+n);
	do{
		int count = 0;
		for(int i=1;i<n;i++){
			for(int j=0;j<S[i].length();j++){
				if(S[i+1].find(S[i][j])!=string::npos) count ++;
			}
		}
		ans = min(count,ans);
	}while(next_permutation(S+1,S+1+n));
	cout << ans;
}

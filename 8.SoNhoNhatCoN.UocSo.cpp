#include<bits/stdc++.h>
using namespace std;
long long res;
int n;
int p[20] = {0,2,3,5,7,11,13,17,19,23,29};
void solve(int i,long long ans, int cnt){
	if(cnt>n) return;
	if(cnt==n) res = min(res,ans);
	for(int j=1;;j++){
		if(ans*p[i]>res) break;
		ans *= p[i];
		if(ans<0) break;
		solve(i+1,ans,cnt*(j+1));
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		res = LLONG_MAX;
		cin >> n;
		solve(1,1,1);
		cout << res << endl;
	}
}

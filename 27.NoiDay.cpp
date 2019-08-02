#include<bits/stdc++.h>
using namespace std;
int MOD = 1e9+7;
int n;
priority_queue<int, vector<int>, greater<int> > pq;

void Solve(){
	int res = 0;
	while(pq.size()>1){
		int frist = pq.top();
		pq.pop();
		int second = pq.top();
		pq.pop();
		int x = (frist+second)%MOD;
		pq.push(x);
		res = (res + x)%MOD;
	}
	cout << res << endl;
}
int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		int k;
		cin >> k;
		pq.push(k);
	}
	Solve();
}

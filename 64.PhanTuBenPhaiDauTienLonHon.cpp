#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> V;
void Solve(){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(V[i]<V[j]){
				cout << V[j] <<" ";
				break;
			}
			else if(j==(n-1)){
				cout << "-1 ";
			}
		}
	}
	cout << "-1 "<< endl;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		cin >> n;
		V.clear();
		for(int i=1;i<=n;i++){
			int x; cin >> x;
			V.push_back(x);
		}
		Solve();
	}
}

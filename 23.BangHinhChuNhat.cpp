#include <bits/stdc++.h>
using namespace std;
long long Min1 = 1e9,Min2 = 1e9;
int main(){
	int n;
	cin >> n;
	while(n--){
		long long m,k;
		cin >> m >> k;
		Min1 = min(m,Min1); 
		Min2 = min(k,Min2);
	}
	cout << Min1 * Min2 << endl;
}

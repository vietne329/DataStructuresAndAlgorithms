#include <bits/stdc++.h>
using namespace std;
const long MIN = 3e9;
long a[100003];
int main(){
	int t;
	cin >> t;
	while(t--){
		long Min = MIN,dem=0;
		int n;
		cin >> n;
		vector<long> MyMap(n+1,0);
		for(int i=1;i<=n;i++) cin >> a[i];
		sort(a+1,a+1+n);
		for(int i=1;i<n;i++){
			Min = min(Min,a[i+1]-a[i]);
			MyMap[a[i+1]-a[i]]++;
		}
		cout << Min <<" "<<MyMap[Min]<<endl;
	}
}

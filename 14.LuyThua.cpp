#include<bits/stdc++.h>
using namespace std;
long M = 1e9+7;
long long power(long a,long n){
	if(n==0) return 1;
	long long tmp = power(a,n/2);
	if(n%2==0) return tmp * tmp % M;
	return (tmp*tmp%M) * a% M;
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long n,k;
		cin >> n >>k;
		cout << power(n,k) << endl;
	}	
}

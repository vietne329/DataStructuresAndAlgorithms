#include<bits/stdc++.h>
using namespace std;
long long power(long long a, long long n){
	if(n==0) return 1;
	long long tmp = power(a,n/2);
	if(n%2==0) return  tmp * tmp;
	return tmp * tmp * a;
}
long long  Xuli(long long n,long long k){
	long long x = power(2,n-1);
	if(k%x==0) return n;
	else{
		Xuli(n-1,k);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,k;
		cin >> n >> k;
		cout << Xuli(n,k) << endl;
	}
}

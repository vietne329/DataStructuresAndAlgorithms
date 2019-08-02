#include <bits/stdc++.h>
using namespace std;
long n,MOD = 1e9+7;
struct MaTran{
	long long c[2][2];
	MaTran(){
		c[0][0] = 0;
		c[0][1] = 1;
		c[1][0] = 1;
		c[1][1] = 1;
	}
};
long long mul(long long a,long long b){
	if(a==0||b==0) return 0;
	if(b==1) return  a%MOD;
	if(a==1) return b%MOD;
	long long res = mul(a,b/2);
	if(b%2) return (res*2%MOD+a)%MOD;
	return res*2%MOD;
	
}
MaTran operator * (MaTran a, MaTran b){
	MaTran res;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			res.c[i][j] = 0;
			for(int k=0;k<2;k++){
				res.c[i][j] = (res.c[i][j] +  mul(a.c[i][k],b.c[k][j])) % MOD;
			}
		}
	}
	return res;
}
MaTran power(MaTran A,long n){
	if(n==1) return A;
	MaTran tmp = power(A,n/2);
	if(n%2==0) return tmp * tmp;
	return tmp * tmp * A;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		MaTran A;
		A = power(A,n);
		cout << A.c[0][1] << endl;
	}
}

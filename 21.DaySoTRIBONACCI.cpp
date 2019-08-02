#include <bits/stdc++.h>
using namespace std;
struct MaTran{
	long long c[10][10];
	MaTran(){
		memset(c,0,sizeof(c));
	}
};
MaTran A;

long long MOD = 1e15+7,n;
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
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			for(int k=1;k<=4;k++){
				res.c[i][j] = (res.c[i][j] + mul(a.c[i][k],b.c[k][j])) % MOD;
			}
		}
	}
	return res;
}
MaTran power(MaTran A,long long n){
	if(n==1) return A;
	MaTran tmp = power(A,n/2);
	tmp = tmp * tmp;
	if(n%2==0) return tmp;
	return tmp * A;
}
long long calc(){
	if(n<=3){
		if(n==1) return 1;
		if(n==2) return 3;
		if(n==3) return 6;
	}
	MaTran res = power(A,n-3);
	return (res.c[3][1] + res.c[3][2]*3%MOD+res.c[3][3]*6%MOD+res.c[3][4]*2%MOD)%MOD;
}
int main(){
	A.c[1][2] = A.c[2][3] = 1;
	A.c[3][1] = A.c[3][2] = 1;
	A.c[3][3] = A.c[3][4] = A.c[4][4] = 1;
	
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		cout << calc() << endl;
		
	}
}

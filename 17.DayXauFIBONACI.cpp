#include<bits/stdc++.h>
using namespace std;
long long F[95];
void Fibo(){
	F[1] = 1;
	F[2] = 1;
	for(int i=3;i<=92;i++){
		F[i]=F[i-1] + F[i-2];
	}
}
char Xuli(int n,long long k){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<=F[n-2]) return Xuli(n-2,k);
	return Xuli(n-1,k-F[n-2]);
}
int main(){
	int t;
	cin >> t;
	Fibo();
	while(t--){
		int n;long long k;
		cin >> n >> k;
		cout << Xuli(n,k) << endl;
	}
}

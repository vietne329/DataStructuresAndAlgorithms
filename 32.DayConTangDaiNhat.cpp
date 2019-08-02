#include<bits/stdc++.h>
using namespace std;
int a[10003],F[10003];
int main(){
	int n,kq=0;
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i];
	for(int i=1;i<=n;i++){
		F[i] = 1;
		for(int j=1;j<=i;j++){
			if(a[j]<a[i]){
				F[i] = max(F[i],F[j]+1);
			}
		}
		kq = max(kq,F[i]);
	}
	cout << kq;
}

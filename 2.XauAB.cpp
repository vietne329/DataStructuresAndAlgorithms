#include<bits/stdc++.h>
using namespace std;
int N, K,a[100],X[10001][10001],dem=0;
void Xuli(){
	int s = 0,smax = 0;
	for(int i=1;i<=N;i++){
		if(a[i]==0) s++;
		else s = 0;
		smax = max(smax,s);
	}
	if(smax==K){
		dem++;
		for(int i=1;i<=N;i++){
			X[dem][i] = a[i];
		}
	}
}
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i] = j;
		if(i==N){
			Xuli();
		}
		else Try(i+1);
	}
}
int main(){
	cin >> N >> K;
	Try(1);
	cout << dem << endl;
	for(int i=1;i<=dem;i++){
		for(int j=1;j<=N;j++){
			if(X[i][j]==0) cout <<"A";
			else cout << "B";
		}
		cout << endl;
	}
}

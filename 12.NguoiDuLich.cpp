#include<bits/stdc++.h>
using namespace std;
int N,a[100][100],X[100],T[100],FREE[100],bestconfig = INT_MAX;
void Try(int i){
	for(int j=2;j<=N;j++){
		if(FREE[j]==0){
			X[i] = j;
			T[i] = T[i-1] + a[X[i-1]][j];
			if(T[i]<bestconfig){
				if(i<N){
					FREE[j] = 1;
					Try(i+1);
					FREE[j] = 0;
				}
				else if(T[N] + a[X[N]][1]<bestconfig){
					bestconfig = T[N] + a[X[N]][1];
				}
			}
		}
	}
}
int main(){
	cin >> N;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			cin >> a[i][j];
		}
	}
	memset(FREE,0,sizeof(FREE));
	FREE[1] = 1;
	X[1] = 1;
	T[1] = 0;
	Try(2);
	cout << bestconfig;
}

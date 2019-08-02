#include<bits/stdc++.h>
using namespace std;
int N,K,dem=0,a[100][100],b[100][100],x[100],dd[100];
void display(){
	int sum = 0;
	for(int i=1;i<=N;i++){
		sum += a[i][x[i]];
	}
	if(sum==K){
		dem++;
		for(int i=1;i<=N;i++){
			b[dem][i] = x[i];
		}
	}
}
void Try(int i){
	for(int j=1;j<=N;j++){
		if(dd[j]==0){
			dd[j] = 1;
			x[i] = j;
			if(i==N){
				display();
			}
			else Try(i+1);
			dd[j] = 0;
		}
	}
}
int main(){
	cin >> N >> K;
	memset(dd,0,sizeof(dd));
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			cin >> a[i][j];
		}
	}
	Try(1);
	cout << dem << endl;
	for(int i=1;i<=dem;i++){
		for(int j=1;j<=N;j++){
			cout << b[i][j] <<" ";
		}
		cout << endl;
	}
	
}

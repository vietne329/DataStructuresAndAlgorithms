#include<bits/stdc++.h>
using namespace std;
int N,K,a[100];
void display(){
	int dem =0;
	for(int i=1;i<=N;i++){
		if(a[i]==1) dem++;
	}
	if(dem==K){
		for(int i=1;i<=N;i++){
			cout << a[i];
		}
		cout << endl;
	}
}
void Try(int i){
	for(int j=0;j<=1;j++){
		a[i] = j;
		if(i==N){
			display();
		}
		else Try(i+1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> N >> K;
		Try(1);
	}
}

#include<bits/stdc++.h>
using namespace std;
int S, N,a[100],check[100],s = 0, smax=0;
void Try(int i){
	smax = max(s,smax);
	for(int j=1;j<=N;j++){
		if(check[j]==0&&s+a[j]<S){
			check[j] = 1;
			s+= a[j];
			Try(i+1);
			check[j] = 0;
			s-= a[j];
		}
	}
}
int main(){
	cin >> S >> N;
	memset(check,0,sizeof(check));
	for(int i=1;i<=N;i++){
		cin >> a[i];
	}
	Try(1);
	cout << smax;
}

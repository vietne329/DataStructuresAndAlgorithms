#include<bits/stdc++.h>
using namespace std;
int N, K,a[100],b[100],dd[100];
void display(){
	memset(dd,0,sizeof(dd));
	int dem = 0;
	for(int i=1;i<=K;i++){
		for(int j=1;j<=K;j++){
			if(dd[j]==0&&a[i]==b[j]){
				dd[j] = 1;
				dem++;
			}
		}
	}
	cout << K-dem << endl;
}
void Xuli(){
	int i=K;
	while(i>0&&a[i]==(N-K+i)) i--;
	if(i>0){
		a[i]++;
		for(int j=i+1;j<=K;j++){
			a[j] = a[j-1] + 1;
		}
		display();
	}
	else cout << K << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> N >> K;
		for(int i=1;i<=K;i++){
			cin >> a[i];
			b[i] = a[i];
		}
		Xuli();
	}
}

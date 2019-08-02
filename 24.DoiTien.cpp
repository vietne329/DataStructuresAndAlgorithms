#include<bits/stdc++.h>
using namespace std;
int T[10] = {1000,500,200,100,50,20,10,5,2,1};
int n;
void Solve(){
	int dem =0,i=0;
	while(n){
		if(n>=T[i]){
			n-=T[i];
			dem++;
		}
		else i++;
	}
	cout << dem << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Solve();
	}
}

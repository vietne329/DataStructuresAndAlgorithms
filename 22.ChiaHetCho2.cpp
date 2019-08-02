#include<bits/stdc++.h>
using namespace std;
long long res = LLONG_MAX;
void CountDivisior(int n,int k){
	int i,dem=0;
	for(i=1;i<sqrt(n);i++){
		if(n%i==0){
			if(i%k==0){
				dem++;
			}
			if((n/i)%k==0){
				dem++;
			}
		}
	}
	if((i*i)==n&&i%k==0) dem++;
	cout << dem << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		CountDivisior(n,2);
	}
}

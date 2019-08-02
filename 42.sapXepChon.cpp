#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[102];
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i];
	for(int i=1;i<n;i++){
		int k = a[i+1],vt = i+1;
		for(int j=i+1;j<=n;j++){
			if(k > a[j]){
				k = a[j];
				vt = j;
			}
		}
		if(k<a[i]){
			swap(a[i],a[vt]);
		}
		cout << "Buoc "<<i<<": ";
		for(int j=1;j<=n;j++){
			cout << a[j] <<" ";
		}
		cout << endl;
	}
}

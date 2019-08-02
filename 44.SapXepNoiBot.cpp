#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a[102],test=0;
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i];
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				test = 1;
			}
		}
		if(test==1){
			test = 0;
			cout << "Buoc "<<i<<": ";
			for(int j=1;j<=n;j++) cout << a[j] <<" ";
			cout << endl;
		}
	}
}

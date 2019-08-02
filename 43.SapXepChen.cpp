#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[102];
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i];
	for(int i=1;i<=n;i++){
		int j = i-1, temp = a[i];
		while(temp<a[j]&&j>0){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
		cout << "Buoc "<<i-1<<": ";
		for(int j=1;j<=i;j++) cout << a[j] <<" ";
		cout << endl;
	}
}

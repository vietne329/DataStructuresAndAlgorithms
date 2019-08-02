#include <bits/stdc++.h>
using namespace std;
long long a[100001];
int main(){
	long n;
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i];
	stable_sort(a+1,a+n+1);
	for(int i=1;i<=n;i++) cout << a[i] <<" ";
}

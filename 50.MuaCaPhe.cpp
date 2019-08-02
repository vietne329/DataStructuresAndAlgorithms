
#include <bits/stdc++.h> 
using namespace std; 
	long arr[1001],n,k;
long countLess() 
{ 
	int l = 0; 
	int r = n - 1; 
	int leftLess = n; 
	while (l <= r) { 
		int m = l + (r - l) / 2; 
		if (arr[m] > k) { 
			leftLess = m; 
			r = m - 1; 
		} 
		else
			l = m + 1; 
	} 
	cout <<  leftLess << endl; 
} 
int main() { 
	cin >> n;
	for(int i=0;i<n;i++) cin >> arr[i];
	sort(arr,arr+n);
	int t;
	cin >> t;
	while(t--){
		cin >> k;
		countLess();
	}
	return 0; 
} 


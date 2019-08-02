#include<bits/stdc++.h>
using namespace std;
int a[100003];
int Brinary_Search(int a[],int x,int left,int right){
	if(left>right) return -1;
	int mid = (left + right)/2;
	if(a[mid]==x) return mid;
	if(a[mid]>x) return Brinary_Search(a,x,left,mid-1);
	return Brinary_Search(a,x,mid+1,right);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		for(int i=1;i<=n;i++){
			cin >> a[i];
		}
		int x = Brinary_Search(a,k,1,n);
		if(x==-1) cout << "NO" << endl;
		else cout << x << endl;
	}
}

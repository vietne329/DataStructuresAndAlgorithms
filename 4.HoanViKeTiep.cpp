#include<bits/stdc++.h>
using namespace std;
int number,a[100];
string str;
void Sovle(){
	int n,i;
	n = str.length();
	for(i=0;i<n;i++) a[i] = str[i] - '0';
	i = n-2;
	while(i>0&&a[i]>=a[i+1]) i --;
	if(i>0){
		int k = n-1;
		while(a[i]>=a[k])k--;
		swap(a[i],a[k]);
		int r = i + 1, s = n-1;
		while(r<=s){
			swap(a[r],a[s]);r++;s--;
		}
		cout << number <<" ";
		for(int i=0;i<n;i++){
			cout << a[i] ;
		}
		cout << endl;
	}
	else cout << number <<" BIGGEST" << endl;
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> number >> str;
		Sovle();
	}
}

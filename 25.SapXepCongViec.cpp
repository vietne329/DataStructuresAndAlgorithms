#include<bits/stdc++.h>
using namespace std;

struct Cv{
	int begin,end;
	bool operator < (Cv x){
		return this->end < x.end;
	}
};
Cv a[100003];
int n;
void Solve(){
	sort(a,a+n);
	int k = 0,dem=1;
	for(int i=1;i<n;i++){
		if(a[i].begin>=a[k].end){
			k = i;
			dem++;
		}
	}
	cout << dem << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> a[i].begin >> a[i].end;
		}
		Solve();
	}
}

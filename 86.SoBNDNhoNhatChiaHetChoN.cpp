// Bai 86
#include <bits/stdc++.h>
using namespace std;
bool Chiahet(string a,int b){
	long long res = 0;
//	for(int i=0;i<a.length();i++){
//		res = res *10+a[i]-'0';
//		if(res>=b){
//			res%=b;
//		}
//	}
	stringstream ss;
	ss << a;
	ss >> res;
	if(res%b==0) return true;
	return false;
}
void minBDN(int n){
	queue<string> q;
	q.push("1");
	string t = q.front();q.pop();
	while(!Chiahet(t,n)){
		q.push(t+"0");
		q.push(t+"1");
		t = q.front(); q.pop();
	}
	cout << t << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		minBDN(n);
	}
	return 0;
}

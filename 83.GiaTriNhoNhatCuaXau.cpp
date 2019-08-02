
#include<iostream>
#include<queue>
#include<cmath>
using namespace std;
long long dem[40];
long long minValue(string s,long long k){
	long long res = 0;
	if(k>=s.length()){
		return 0;
	}
	for(int i=0;i<='Z'-'A';i++){
		dem[i] = 0;
	}
	for(int i=0;i<s.length();i++){
		dem[s[i]-'A']++;
	}
	priority_queue<int> pq;
	for(int i=0;i<='Z'-'A';i++){
		if(dem[i]!=0){
			pq.push(dem[i]);
		}
	}
	while(k--){
		long long t = pq.top();pq.pop();
		t--;
		pq.push(t);
	}
	while(!pq.empty()){
		int t = pq.top();pq.pop();
		res += pow(t,2);
	}
	return res;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		long long k;
		cin >> k; cin.ignore();
		getline(cin,s);
		cout << minValue(s,k) << endl;
	}
}

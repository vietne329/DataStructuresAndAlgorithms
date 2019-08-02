// Bai 87
#include <iostream>
#include <queue>
#include <set>
using namespace std;
typedef pair<int,int> pii;
int minStep(int s,int t){
	set<int> visited;
	visited.insert(s);
	pii a;
	a.first = s;
	a.second = 0;
	queue<pii> q;
	q.push(a);
	while(!q.empty()){
		pii tmp = q.front();q.pop();
		if(tmp.first==t) return tmp.second;
		if(tmp.first-1==t||tmp.first*2==t){
			return tmp.second+1;
		} 
		if(visited.find(tmp.first-1)==visited.end()){
			q.push(pii(tmp.first-1,tmp.second+1));
			visited.insert(tmp.first-1);
		}
		if(visited.find(tmp.first*2)==visited.end()){
			q.push(pii(tmp.first*2,tmp.second+1));
			visited.insert(tmp.first*2);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int S,T;
		cin >> S >> T;
		cout << minStep(S,T) << endl;
	}
}

// Bai 88
#include <iostream>
#include <set>
#include <queue>
using namespace std;
typedef pair<int,int> ii;
int minStep(int n){
	set<int> visited;
	visited.insert(n);
	queue<ii> Q;
	Q.push(ii(n,0));
	while(!Q.empty()){
		ii top = Q.front(); Q.pop();
		if(top.first==1){
			return top.second;
		}
		if(top.first-1==1){
			return top.second + 1;
		}
		if(visited.find(top.first-1)==visited.end()){
			Q.push(ii(top.first-1,top.second+1));
			visited.insert(top.first-1);
		}
		for(int i=2;i*i<=top.first;i++){
			if(top.first%i==0){
				if(visited.find(top.first/i)==visited.end()){
					visited.insert(top.first/i);
					Q.push(ii(top.first/i,top.second+1));
				}
			}
		}
		
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int S;
		cin >> S ;
		cout << minStep(S) << endl;
	}
}

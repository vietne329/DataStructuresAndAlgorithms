// Bai 85 // sai 
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<long long> res;
bool visited[230];
void Init(){
	res.resize(230);
	int dem = 0;
	queue<int> q;
	q.push(9);
	long long t =q.front();q.pop();
	while(dem<=200){
		for(int i=1;i<=200&&i<=t;i++){
			if(t%i==0&& !visited[i]){
				visited[i] = true;
				res.at(i) = t;
				dem++;
			}
		}
		q.push(t*10);
		q.push(t*10+9);
		t = q.front(); q.pop();
	}
}
int main(){
	int t;
	cin >> t;
	Init();
	while(t--){
		int n;
		cin >> n;
		cout << res.at(n) << endl; 
	}
}

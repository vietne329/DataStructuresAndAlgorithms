// Bai 65
#include <iostream>
#include <stack>
using namespace std;
long long a[100001], MAX ,n;
void Process(){
	MAX = 0;
	int i = 0;
	stack<int> S;
	while(i<n){
		if(S.empty()||a[S.top()]<=a[i]){
			S.push(i);
			i++;
		}
		else{
			int p = S.top(); S.pop();
			long long tmp = a[p] * (S.empty() ? i : i-S.top()-1);
			MAX = max(tmp,MAX);
		}
	}
	while(!S.empty()){
		int p = S.top(); S.pop();
		long long tmp = a[p] * (S.empty() ? i : i-S.top()-1);
		MAX = max(tmp,MAX);
	}
	cout << MAX << endl;
}
int main(){
	int t;
	cin >> t; cin.ignore();
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++) cin >> a[i];
		Process();
	}
}


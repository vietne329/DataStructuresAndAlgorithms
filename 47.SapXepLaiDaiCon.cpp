#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int a[100003];
struct cmp {
	bool operator () (int a,int b){
		return a<b;
	}
};
int main(){
	int t;
	cin >> t;
	while(t--){
		priority_queue<int,vector<int> , greater<int> > pq1;
		priority_queue<int,vector<int> , cmp> pq2;
		int n;
		cin >> n;
		for(int i=1;i<=n;i++){
			cin >> a[i];
			pq1.push(a[i]);
			pq2.push(a[i]);
		}
		int i = 1, j = n;
		while(i<=j){
			if(pq1.top()==a[i] || pq2.top()==a[j] ){
				if(pq1.top()==a[i]){
					pq1.pop(); i++;
				}
				if(pq2.top()==a[j]){
					pq2.pop(); j--;
				}
			}
			else break;	
		}
		if(i==j+1) cout << "YES" << endl;
		else cout << j - i + 1 << endl;
	}
}

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x,tmp=0;
		cin >> n >> x;
		for(int i=1;i<=n;i++){
			int k;
			cin >> k;
			if(k==x){
				tmp = k;
			}
		}
		if(tmp)
		cout << tmp <<endl;
		else cout << "NO"<<endl; 
	}
}

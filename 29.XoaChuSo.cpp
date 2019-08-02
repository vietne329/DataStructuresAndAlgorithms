#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,K;
	deque<int> Deq;
	cin >> N >> K;
	while(N--){
		char tmp;
		cin >> tmp;
		int tmp_int = tmp -'0';
		if(Deq.empty()) Deq.push_back(tmp_int);
		else{
			while(!Deq.empty()&&tmp_int>Deq.back()&&K>0){
				K--;
				Deq.pop_back();
			}
			Deq.push_back(tmp_int);
		}
	}
	while(K>0&& !Deq.empty()){
		Deq.pop_back();
		K--;
	}
	while(!Deq.empty()){
		cout << Deq.front();
		Deq.pop_front();
	}
}

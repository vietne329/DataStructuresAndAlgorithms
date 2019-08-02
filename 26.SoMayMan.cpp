#include<bits/stdc++.h>
using namespace std;
int Sum;
void Solve(){
	int a = 0, b=0;
	while(Sum>0){
		if(Sum%7==0) 
			b++, Sum-=7;
		else if(Sum%4==0)	
			a++,Sum-=4;
		else 
			a++, Sum-=4;
	}
	if(Sum<0){
		cout << "-1";
		return;
	}
	for(int i=0;i<a;i++) cout << "4";
	for(int i=0;i<b;i++) cout << "7";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> Sum;
		Solve();
		cout << endl;
	}
}

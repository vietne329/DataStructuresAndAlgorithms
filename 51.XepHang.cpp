#include<bits/stdc++.h>
using namespace std;
struct data{
	int begin,time;
	bool operator < (data x){
		return this->begin < x.begin;
	}
};
data a[200];
int main(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i].begin >> a[i].time;
	}
	sort(a+1,a+1+n);
	int time = a[1].begin;
	for(int i=2;i<=n;i++){
		time += a[i-1].time;
		time = max(a[i].begin,time);
	}
	cout << a[n].time + time;

}

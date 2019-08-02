#include<bits/stdc++.h>
using namespace std;
int N,a[20];
bool flage;
long long calc(){
	long long s = 0;
	for(int i=1;i<=17;i++){
		s = s*10 + a[i];
	}
	return s;
}
void Try(int i){
	for(int j=0;j<=1&&flage==true;j++){
		if(j==1) a[i] = 9;
		else a[i] = 0;
		if(i==17){
			long long num = calc();
			if((num>0)&&(num%N)==0){
				cout << num << endl;
				flage = false;
			}
		}
		else Try(i+1);
	}
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		cin >> N;
		flage = true;
		Try(1);
	}
	return 0;
}

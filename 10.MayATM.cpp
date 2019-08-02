#include<bits/stdc++.h>
using namespace std;
int N,S,a[100],dd[100];
long d = 0, bestconfig=LONG_MAX;
void Try(int i){
	for(int j=0;j<=1;j++){
		if(j==1) S-=a[i], d++;
		if(S>=0&&d<bestconfig){
			if(i==N){
				if(S==0) bestconfig = d;
			}
			else Try(i+1);
		}
		if(j==1) S+=a[i],d--;
	}
}
int main(){
	cin >> N >> S;
	for(int i=1;i<=N;i++){
		cin >> a[i];
	}
	Try(1);
	cout << bestconfig;
}

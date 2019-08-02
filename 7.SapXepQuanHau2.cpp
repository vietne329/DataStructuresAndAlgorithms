#include<bits/stdc++.h>
using namespace std;
int N = 8,a[100][100],X[100],COT[100],DCXuoi[200],DCNguoc[200];
int smax;
void display(){
	int s = 0;
	for(int i=1;i<=N;i++){
		s += a[i][X[i]];
	}
	smax = max(smax,s);
}
void Try(int i){
	for(int j=1;j<=N;j++){
		if(COT[j]==0&&DCXuoi[i+j-1]==0&&DCNguoc[i-j+N]==0){
			X[i] = j;
			COT[j]=1;
			DCXuoi[i+j-1]=1;
			DCNguoc[i-j+N]=1;
			if(i==N){
				display();
			}
			else Try(i+1);
			COT[j]=0;
			DCXuoi[i+j-1]=0;
			DCNguoc[i-j+N]=0;
		}
	}
}
void init(){
	smax = 0;
	memset(COT,0,sizeof(COT));
	memset(DCXuoi,0,sizeof(DCXuoi));
	memset(DCNguoc,0,sizeof(DCNguoc));
}
int main(){
	int t;
	cin >> t;
	while(t--){
		for(int i=1;i<=N;i++){
			for(int j=1;j<=N;j++){
				cin >> a[i][j];
			}
		}
		init();
		Try(1);
		cout << smax << endl;
	}
}


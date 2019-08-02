#include<bits/stdc++.h>
using namespace std;
int N,COT[100],DCXuoi[200],DCNguoc[200],dem=0;
void Try(int i){
	for(int j=1;j<=N;j++){
		if(COT[j]==0&&DCXuoi[i+j-1]==0&&DCNguoc[i-j+N]==0){
			COT[j]=1;
			DCXuoi[i+j-1]=1;
			DCNguoc[i-j+N]=1;
			if(i==N){
				dem++;
			}
			else Try(i+1);
			COT[j]=0;
			DCXuoi[i+j-1]=0;
			DCNguoc[i-j+N]=0;
		}
	}
}
int main(){
	cin >> N;
	memset(COT,0,sizeof(COT));
	memset(DCXuoi,0,sizeof(DCXuoi));
	memset(DCNguoc,0,sizeof(DCNguoc));
	Try(1);
	cout << dem;
}


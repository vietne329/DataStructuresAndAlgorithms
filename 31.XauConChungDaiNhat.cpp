#include<bits/stdc++.h>
using namespace std;
int F[1002][1002];
int main(){
	string str1,str2;
	cin >> str1 >> str2;
	memset(F,0,sizeof(F));
	int n = str1.length(), m = str2.length();
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(str1[i]==str2[j]){
				F[i+1][j+1] = F[i][j] + 1;
			}
			else 
				F[i+1][j+1] = max(F[i+1][j],F[i][j+1]);
		}
	}
	cout << F[n][m];
}

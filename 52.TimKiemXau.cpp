#include <bits/stdc++.h>
using namespace std;
void Xuli(long KMP[],int m,string str2){
	int i =1,len=0;
	KMP[0] = 0;
	while(i<m){
		if(str2[len] == str2[i]){
			len++;
			KMP[i] = len;
			i++;
		}
		else{
			if(len!=0){
				len = KMP[len-1];
			}
			else{
				KMP[i] = 0;
				i++;
			}
		}
	}
}
void Check(string str1,string str2){
	int n = str1.length(),m=str2.length();
	long *KMP = new long[m];
	Xuli(KMP,m,str2);
	int i = 0,j=0;
	while(i<n){
		if(str1[i]==str2[j]){
			i++;j++;
		}
		if(j==m){
			cout <<"YES" << endl;
			return;
		}
		else if(i<n&&str1[i]!=str2[j]){
			if(j!=0){
				j = KMP[j-1];
			}
			else{
				i++;
			}
		}
	}
	cout << "NO" << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string str1,str2;
		cin >> str1 >> str2;
		Check(str1,str2);
	}
}

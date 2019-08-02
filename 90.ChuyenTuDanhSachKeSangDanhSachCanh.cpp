#include<bits/stdc++.h>
using namespace std;
int toINT(string s){
	stringstream ss;
	ss << s;
	int a;
	ss >> a;
	return a;
}
int main(){
	int n;
	cin >> n;cin.ignore();
	vector< vector<int> > a(n+1,vector<int>(n+1,0));
	for(int i=1;i<=n;i++){
		string str,s;
		getline(cin,str);
		for(int j=0;j<str.length();j++){
			if(isdigit(str[j])){
				s = s +str[j];
			}
			if(str[j]==' '||j==(str.length()-1)){
				int num = toINT(s);
				a[num][i] = 1;
				a[i][num] = 1;
				s = "";
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1+i;j<=n;j++){
			if(a[i][j]){
				cout << i << " "<<j << endl;
			}
		}
	}
}

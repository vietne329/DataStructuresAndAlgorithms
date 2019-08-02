#include <bits/stdc++.h>
using namespace std;
string str;
set<string> result;
vector<int> a,b;
stack<int> tmp;
int n,m,x[11];
void display(){
	vector<int> vt(m+1,1);
	for(int i=1;i<=n;i++){
		if(x[i]==0){
			vt[a[i-1]] = 0;
			vt[b[i-1]] = 0;
		}
	}
	string s = "";
	for(int i=0;i<str.length();i++){
		if(vt[i]) s = s + str[i];
	}
	result.insert(s);
}
void Try(int i){
	for(int j=0;j<=1;j++){
		x[i] = j;
		if(i==n) display();
		else Try(i+1);
	}
}
int main() {
	getline(cin,str);
	m = str.length();
	for(int i=0;i<str.length();i++){
		if(str[i]=='('){
			tmp.push(i);
		}
		else if(str[i]==')'){
			n++;
			a.push_back(tmp.top());
			b.push_back(i);
			tmp.pop();
		}
	}
	Try(1);
	set<string>::iterator it;
	for(it=result.begin();it!=result.end();it++){
		if(it!=result.begin())
		cout << *it << endl;
	}
	return 0;
} 

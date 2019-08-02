#include<iostream>
#include<stack>
using namespace std;
string str;
void Solve(){
	stack<char> S;
	for(int i=0;i<str.length();i++){
		if(str[i]<='z'&&str[i]>='a'){
			cout << str[i];
		} 
		else if(str[i]==')'){
			if(!S.empty()){
				cout << S.top();
				S.pop();
			}
		}
		else if(str[i]!='('){
			S.push(str[i]);
		}
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		getline(cin,str);
		Solve();
	}
}

#include <bits/stdc++.h>
using namespace std;
bool isOperator(char a){
	if(a=='+'||a=='-'||a=='*'||a=='/'||a=='%') return true;
	return false;
}
void Process(string str){
	stack<int> s;
	for(int i=0;i<str.length();i++){
		char c = str[i];
		if(c=='('||isOperator(c)){
			s.push(c);
		}
		else if(c==')'){
			if(!s.empty()){
				if(s.top()=='('){
					cout << "Yes" << endl;
					return;
				}
				else{
					while(!s.empty()&&s.top()!='('){
						s.pop();
					}
					s.pop();
				}
			}
			else {
				cout << "Yes" << endl;
				return;
			}
		}
	}
	cout << "No" << endl;
}
int main(){
	int t;
	cin >> t; cin.ignore();
	while(t--){
		string str;
		getline(cin,str);
		Process(str);
	}
}

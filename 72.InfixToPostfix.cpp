#include<iostream>
#include<string>
#include<stack>
using namespace std;
int DoUuTien(char ch){
	if(ch=='(') return 0;
	if(ch=='+'||ch=='-') return 1;
	if(ch=='*'||ch=='/') return 2;
	return 3;
}
void Process(string str){
	stack<char> S;
	for(int i=0;i<str.length();i++){
		if(isalpha(str[i])) {
			cout << str[i];
		}	
		else if(str[i]=='('){
			S.push(str[i]);
		}
		else if(str[i]==')'){
			while(!S.empty()&&S.top()!='('){
				cout << S.top();
				S.pop();
			}
			if(!S.empty()) S.pop();
		}
		else{
			while(!S.empty()&&DoUuTien(S.top())>=DoUuTien(str[i])){
				cout << S.top();
				S.pop();
			}
			S.push(str[i]);
		}
	}
	while(!S.empty()){
		cout << S.top(); S.pop();
	}
	cout << endl;
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

// Bai 70
#include <iostream>
#include <stack>
using namespace std;
bool isOperator(char a){
	if(a=='+'||a=='-'||a=='*'||a=='/'||a=='%'||a=='^') return true;
	return false;
}
void Process(string str){
	stack<string> S;
	for(int i=0;i<str.length();i++){
		char a = str[i];
		if(isOperator(a)){
			string str1 = S.top(); S.pop();
			string str2 = S.top(); S.pop();
			string tmp = a + str2 + str1;
			S.push(tmp);
		}
		else {
			S.push(string(1,a));
		}
	}
	cout << S.top() << endl;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string str;
		getline(cin,str);
		Process(str);
	}
}

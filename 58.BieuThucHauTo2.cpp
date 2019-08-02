#include <iostream>
#include <stack>
using namespace std;
string str;
int DoUuTien(char ch){
    if(ch == '(')
        return 0;
    if(ch == '+' || ch == '-')
        return 1;
    if(ch == '*' || ch == '/' || ch == '%')
        return 2;
    return 3;
}
void Process(){
	stack<char> MyS;
	string s;
	for(int i=0;i<str.length();i++){
		bool isChange = false;
	    if( isalpha(str[i])|| isdigit(str[i])|| isalnum(str[i]))
		{
        	s = s + str[i];
		}
		else{
			if(str[i]=='('){
				MyS.push(str[i]);
			}
			else if(str[i]==')'){
				while(!MyS.empty()&&MyS.top()!='('){
					isChange = true;
					s = s + MyS.top();
					MyS.pop();
				}
				if(isChange) MyS.pop();
			}
			else{
//				while(!MyS.empty() && DoUuTien(MyS.top())>= DoUuTien(str[i])){
//					s = s + MyS.top();
//					MyS.pop();
//				}
				MyS.push(str[i]);
			}
		}
	}
	while(!MyS.empty()&&MyS.top()!='('){
			s = s + MyS.top();
		MyS.pop();
	}
	cout << s;
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		getline(cin,str);
		Process();
	}
}

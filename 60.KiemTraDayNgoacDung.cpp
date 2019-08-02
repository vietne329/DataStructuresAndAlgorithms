#include <iostream>
#include <stack>
using namespace std;
string str;
int KiemTra(char ch){
	if(ch==')'||ch=='(') return 1;
	if(ch=='{'||ch=='}') return 2;
	if(ch==']'||ch=='[') return 3;
}
void Process(){
	stack<char> MyS;
	for(int i=0;i<str.length();i++){
		if(str[i]=='('||str[i]=='['||str[i]=='{'){
			MyS.push(str[i]);
		}
		else {
			if(MyS.empty()){
				cout << "NO" << endl;
				return;
			}
			else{
				if(KiemTra(str[i])==KiemTra(MyS.top())){
					MyS.pop();
				}
				else {
					cout <<"NO" << endl;
					return;
				}
			}
		}
	}
	if(!MyS.empty()){
		cout << "NO" << endl;
		return;
	}
	cout << "YES"<<endl;
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

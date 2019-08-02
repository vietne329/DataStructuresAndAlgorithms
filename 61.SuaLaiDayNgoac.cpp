// Bai 61
#include <iostream>
#include <stack>
using namespace std;
void Sovle(string str){
	stack<char> S;
	int dem = 0;
	for(int i=0;i<str.length();i++){
		if(str[i]=='('){
			S.push(str[i]);
		}
		else{
			if(!S.empty()) S.pop();
			else{
				S.push('(');
				dem++;
			}
		}
	}
	cout << dem + S.size()/2 << endl;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string str;
		getline(cin,str);
		Sovle(str);
	}
}

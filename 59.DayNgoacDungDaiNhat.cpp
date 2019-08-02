#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
string str;
void Process(){
	long ans = 0;
	stack <long> MyS;
	MyS.push(-1);
	for(int i=0;i<str.length();i++){
		if(str[i]=='(') MyS.push(i);
		else{
			MyS.pop();
			if(!MyS.empty()) ans = max(ans,i-MyS.top());
			else MyS.push(i); 
		}
	}
	cout << ans << endl;
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

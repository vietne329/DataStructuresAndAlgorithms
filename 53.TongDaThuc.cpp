#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
void Xuli(string str,queue<pii> &Q){
	int k1 = 0,k2=0,test = 0;	
	for(int i=0;i<str.length();i++){
		if(str[i]=='*') test = 1;
		if(isdigit(str[i])){
			if(test==0)
				k1 = k1 * 10 + (str[i] - '0');
			else
				k2 = k2 * 10 + (str[i] - '0');
		}
		if(str[i]=='+'||i==(str.length()-1)){
			Q.push(make_pair(k1,k2));
			k1 = 0; k2 = 0;
			test = 0;
		}
	}
	
}
string int_to_Str(int a){
    stringstream s;
    s << a;
    string tmp;
    s >> tmp;
    return tmp;
}
string logicFunction(int x,int y){
	string ans;
	ans.append(" + ");
	ans.append(int_to_Str(x)); 
	ans.append("*x^");
	ans.append(int_to_Str(y));
	return ans;
}
void Solve(string str1,string str2){
	queue<pii> Q1,Q2;
	Xuli(str1,Q1);
	Xuli(str2,Q2);
	string ans;
	while(!Q1.empty()&&!Q2.empty()){
		pii top1 = Q1.front();
		pii top2 = Q2.front();
		if(top1.second > top2.second){
			ans = ans + logicFunction(top1.first,top1.second);
			Q1.pop();
		}
		else if(top1.second< top2.second){
			ans = ans + logicFunction(top2.first,top2.second);
			Q2.pop();
		}
		else if(top1.second == top2.second){
			int x = top1.first + top2.first;
			int y = top2.second;
			ans = ans + logicFunction(x,y);
			Q1.pop();  Q2.pop();
		}
	}
	while(!Q1.empty()){
		pii top = Q1.front();
		Q1.pop();
		ans = ans + logicFunction(top.first,top.second);
	}
	while(!Q2.empty()){
		pii top = Q2.front();
		Q2.pop();
		ans = ans + logicFunction(top.first,top.second);
	}
	ans.erase(0,3);
	cout << ans << endl;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string str1,str2;
		getline(cin,str1);
		getline(cin,str2);
		Solve(str1,str2);
	}
}

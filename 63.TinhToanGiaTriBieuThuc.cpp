// Bai 63
#include <iostream>
#include <stack>
using namespace std;
int DoUuTien(char ch){
	if(ch=='(') return 0;
	if(ch=='+'||ch=='-') return 1;
	if(ch=='*'||ch=='/') return 2;
	return 3;
}
long long appOp(long long a,long long b, char op){
	switch(op){
		case '+': return a + b;
		case '-': return a - b;
		case '*': return a * b;
		case '/': return a / b;
	}
}
void calc(stack <long long> &values, stack <char> &ops ){
	long long val2 = values.top();
	values.pop();
	long long val1 = values.top();
	values.pop();
	char op = ops.top();
	ops.pop();
	values.push(appOp(val1,val2,op));
}
void Process(string str){
	stack<long long> values;
	stack<char> ops;
	for(int i=0;i<str.length();i++){
		if(str[i]==' ') continue;
		else if(str[i]=='('){
			ops.push(str[i]);
		}
	 	else if(isdigit(str[i])){ 
            int val = 0; 
            while(i < str.length() &&  isdigit(str[i])) 
            { 
                val = (val*10) + (str[i]-'0'); 
                i++; 
            } 
              
            values.push(val); 
        } 
        else if(str[i] == ')') 
        { 
            while(!ops.empty() && ops.top() != '(') 
            { 
                calc(values,ops);
            } 
            ops.pop(); 
        } 
        else
        { 
            while(!ops.empty() && DoUuTien(ops.top())>=DoUuTien(str[i])){ 
                calc(values,ops);
            } 
            ops.push(str[i]); 
        } 
	}
	while(!ops.empty()){
		calc(values,ops);
	}
	cout << values.top()<< endl;
}
int main(){
	int t;
	cin >> t;cin.ignore();
	while(t--){
		string s;
		cin>>s;
		string str;
		for(int i=0;i<s.length();i++){
			str+=s[i];
			if(s[i+1]=='*'||s[i+1]=='-'||s[i+1]=='/'||s[i+1]=='+'||s[i+1]=='('||s[i+1]==')'){
				str=str+' ';
			}
		}
		Process(str);
	}
}

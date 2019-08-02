#include<bits/stdc++.h>
using namespace std;
long Change_6_to_5(string s){
	int i =0;
	while(i<s.length()){
		if(s[i]=='6') s[i] = '5';
		i++;
	}
	return atoi(s.c_str());
}
long Change_5_to_6(string s){
	int i =0;
	while(i<s.length()){
		if(s[i]=='5') s[i] = '6';
		i++;
	}
	return atoi(s.c_str());
}
long Calc_6_to_5(string a,string b){
	return Change_6_to_5(a) + Change_6_to_5(b);
}
long Calc_5_to_6(string a,string b){
	return Change_5_to_6(a) + Change_5_to_6(b);
}
int main(){
	string a, b;
	cin >> a >> b;
	cout << Calc_6_to_5(a,b) << " "<< Calc_5_to_6(a,b);
	
}

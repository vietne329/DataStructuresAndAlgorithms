#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;
long long Pow(int a, long long b){
	if(b==0) return 1;
	long long x = Pow(a,b/2);
	if(b%2==0) return x*x;
	else return (x*x)*a;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string str;
		deque <int> myDeque;
		cin >> str;
		long i=0;
		while(i<str.length()){
			if(str[i]=='1'||str[i]=='0'){
				myDeque.push_back(str[i]);
				i++;
			}
			else{
					while(i<str.length()){
					myDeque.push_back('1');
					i++;
				}
			}
			
		}
		string s;
		s = "";
		long long tmp=0;
		int n = str.length();
		int j = n;
		while(!myDeque.empty()){
			tmp+= (myDeque.back()-'0')*Pow(2,n-j);
			j--;
			myDeque.pop_back();
		}
		cout << tmp << endl;
		
	}
}

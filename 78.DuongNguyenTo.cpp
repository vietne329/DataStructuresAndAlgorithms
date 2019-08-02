#include<iostream>
#include<string.h>
#include<queue>
using namespace std;
bool sieve[10101];
int dp[10101];
inline void af(int num,char arr[]){
	arr[4] = num%10;
	arr[3] = (num/10)%10;
	arr[2] = (num/100)%10;
	arr[1] = num/1000;
}
int main(){
	for(int i=2;i*i<=9999;i++){
		if(!sieve[i]){
			for(int j=i*i;j<=9999;j+=i){
				sieve[j] = true; 
			}
		}
	}
	int t;
	cin >> t;
	while(t--){
		int x,y;
		cin >> x >> y;
		memset(dp,-1,sizeof(dp));
		queue<int> MyQueue;
		MyQueue.push(x);
		dp[x] = 0;
		while(!MyQueue.empty()){
			int v = MyQueue.front();
			MyQueue.pop();
			char arr[5];
			af(v,arr);
			{
				int t = v - arr[4];
				for(int i=1;i<=9;i+=2){
					int z = t + i;
					if(!sieve[z]){
						if(dp[z]==-1){
							dp[z] = dp[v] + 1;
							MyQueue.push(z);
						}
					}
				}
			}
			{
				int t = v - arr[3]*10;
				for(int i=0;i<=9;i++){
					int z = t + i*10;
					if(!sieve[z]){
						if(dp[z]==-1){
							dp[z] = dp[v] + 1;
							MyQueue.push(z);
						}
					}
				}
			}
			{
				int t = v - arr[2]*100;
				for(int i=0;i<=9;i++){
					int z = t + i*100;
					if(!sieve[z]){
						if(dp[z]==-1){
							dp[z] = dp[v] + 1;
							MyQueue.push(z);
						}		
					}
				}
			}
			{
				int t = v - arr[1]*1000;
				for(int i=1;i<=9;i++){
					int z = t + i*1000;
					if(!sieve[z]){
						if(dp[z]==-1){
							dp[z] = dp[v] + 1;
							MyQueue.push(z);
						}		
					}
				}
			}
		}
		cout << dp[y] <<endl;
	}
	
}

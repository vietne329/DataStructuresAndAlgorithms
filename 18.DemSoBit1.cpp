#include <bits/stdc++.h>
using namespace std;

vector <unsigned long long> vull;
 
long long check(long long l,long long r,int n,long long nn) {
    if (r<vull[n-1]) return check(l,r,n-1,nn/2);
    if (l==r && l==1) return 1;
    if (l==r && l==vull[n-1])return (nn&1);
    if (l==r) return (check(l/2,r/2,n-1,nn/2));
    if (l>vull[n-1]) return check(l-vull[n-1],r-vull[n-1],n-1,nn/2);
    if (l==vull[n-1]) return (nn&1) + check(1,r-vull[n-1],n-1,nn/2);
    if (r<vull[n-1]) return check(l,r,n-1,nn/2);
    if (r==vull[n-1]) return check(l,r-1,n-1,nn/2)+(nn&1);
    return (nn&1) + check(l,vull[n-1]-1,n-1,nn/2)+check(1,r-vull[n-1],n-1,nn/2);
}

void Solve() {
    long long n , r , l;
    cin >> n >> l >> r;
    int i=0;
    while (vull[i]<=n) i++;
    cout << check(l,r,i,n)<<endl;
}

int main() {
    vull.resize(52);
    vull[0]=1;
    for (int i=1;i<=51;i++) vull[i]=vull[i-1]*2;
    int t=0;
    cin >> t;
    while (t--) Solve();
    return 0;
}

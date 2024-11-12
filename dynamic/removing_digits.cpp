#include <bits/stdc++.h>
using namespace std;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
 
#define nl "\n"
#define ll long long
const int MOD = (int)1e7 + 4;
vector<ll> dp(1000001,MOD);
void solve() {
	int n;
	cin>>n;
	for(int i=0;i<=9;i++) dp[i] = 1;
	for(int i =10;i<=n;i++){
		int temp = i;
		long long int mini = MOD;
		while(temp){
			int tempi = temp%10;
			mini = (mini>dp[i-tempi])?dp[i-tempi]:mini;
			temp = temp/10;
		}
		dp[i]= (mini+1)%MOD;
	}
	cout<<dp[n];
}
 
int main() {
    int t = 1;
    while (t--) {
        solve();
    }
}

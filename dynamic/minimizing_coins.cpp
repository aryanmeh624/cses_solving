#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
ll MOD = 1000000007;
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
void solve()
{
	int n;
	int x;
	cin>>n>>x;
	ll arr[n];
	int flag =0;
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	ll dp[x+1]= {-1};
	for(int i = 1;i<=x+1;i++){
		ll mini = MOD;
		flag =0;
		for(int j = 0;j<n;j++){
			if(i==arr[j]){
				mini = 1;
				flag = 1;
				break;
			}
			if(i-arr[j]>=0){
				if(dp[i-arr[j]]!=-1){
					mini = min(mini, dp[i-arr[j]]+1);
					flag = 1;
				}
				
			}
		}
		
		if(flag==0){
			dp[i]=-1;
		}
		else{
			dp[i] = mini;
		}
		//debug(i,dp[i],flag);
	}
	cout<<dp[x];
}
 
int main() {
    int t =1;
	while(t--){
		solve();
	}
}

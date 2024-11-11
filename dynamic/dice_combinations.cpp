#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
ll MOD = 1000000007;
void solve()
{
	ll N;
	cin>>N;
    ll dp[N + 1] = {};
    dp[0] = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= 6 && j <= i; j++) {
            dp[i] = (dp[i] + (dp[i - j])) % MOD;
        }
    }
    cout<< dp[N];
}
 
int main() {
    int t =1;
	while(t--){
		solve();
	}
}

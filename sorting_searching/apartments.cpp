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
vector<bool> dp((int)1e9,false);
void solve() {
	int n,m,k;
	cin>>n>>m>>k;
	vector<ll> arr(n);
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	vector<ll> app(m);
	for(int i =0;i<m;i++){
		cin>>app[i];
	}
	sort(arr.begin(),arr.end());
	sort(app.begin(),app.end());
	int p1 =0, p2 =0;
	int answer =0;
	while(p1<n && p2<m){
		if(abs(arr[p1]-app[p2])<=k){
			answer++;
			p1++;
			p2++;
		}
		else{
			if(arr[p1]>app[p2]){
				p2++;
			}
			else{
				p1++;
			}
		}
	}
	cout<<answer<<nl;
}
 
int main() {
    int t = 1;
    while (t--) {
        solve();
    }
}

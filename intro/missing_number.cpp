#pragma GCC optimize("O3,unroll-loops")
#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define INF 1e18
#define nl "\n"
#define ll long long
void solve() {
    ll n;
    cin>>n;
    ll sumn =0;
    ll  temp;
    for(int i =0;i<n-1;i++){cin>>temp;sumn += temp;}
    ll req= (n*(n+1))/2;
    cout<<req-sumn<<nl;
}
 
int main() {
    fastio();
    solve();

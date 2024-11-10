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
    cout<<n;
    while(n!=1){
        if(n%2==0) n/=2;
        else n = (n*3)+1;
        cout<<" "<<n; 
    }
}
 
int main() {
    fastio();
    solve();

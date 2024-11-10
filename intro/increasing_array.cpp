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
    ll arr[n];
    for(int i =0;i<n;i++) cin>>arr[i];
    ll answer =0;
    for(int i =1;i<n;i++){
        if(arr[i]<arr[i-1]){ answer+=arr[i-1]-arr[i];arr[i] = arr[i-1];}
    }
    cout<<answer<<nl; 
}
 
int main() {
    fastio();
    solve();
}

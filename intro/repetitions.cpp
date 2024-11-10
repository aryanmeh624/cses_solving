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
    string s;
    cin>>s;
    int answer =0;
    int count =1;
    for(int i =1;i<s.length();i++){
        if(s[i]==s[i-1]) count++;
        else{
            answer = max(answer,count);
            count = 1;
        }
    }
    answer= max(answer,count);
    cout<<answer;
}
 
int main() {
    fastio();
    solve();
}

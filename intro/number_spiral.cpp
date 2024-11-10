#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
void solve(){
	long long int x,y;
	cin>>x>>y;
	long long int maxi = max(x,y);
	long long int ans = 1+(maxi*(maxi-1));
	if(maxi==x){
		if(maxi==y){
			cout<<ans<<nl;
		}
		else{
			if(maxi%2==0){
				cout<<ans+(maxi-y)<<nl;
				return;
			}
			cout<<ans-(maxi-y)<<nl;
		}
	}
	else{
		if(maxi%2==0){
			cout<<ans-(maxi-x)<<nl;
			return;
		}
		cout<<ans+(maxi-x)<<nl;
	}
}
 
int main() {
    int t;
	cin>>t;
	while(t--){
		solve();
	}
}
Share code to others

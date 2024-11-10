#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
void solve(){
	long long a,b;
	cin>>a>>b;
	if((((2*a)-b)<0) || (((2*b)-a)<0)){
		cout<<"NO"<<nl;
		return;
	}
	if(((2*a)-b)%3==0 && (((2*b)-a)%3==0)){
		cout<<"YES"<<nl;
	}
	else{
		cout<<"NO"<<nl;
	}
}
 
int main() {
    int t;
	cin>>t;
	while(t--){
		solve();
	}
}

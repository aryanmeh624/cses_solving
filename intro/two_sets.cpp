#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
void solve(){
	long long int a;
	cin>>a;
	if(a<3) cout<<"NO"<<nl;
	else{
		if((a-3)%4==0){
			cout<<"YES"<<nl;
			cout<<(a/2)<<nl;
			cout<<3<<" ";
			for(long long int i=5;i<a;){
				cout<<i<<" "<<i+1<<" ";
				i+=4;
			}
			cout<<nl;
			cout<<(a/2)+1<<nl;
			cout<<1<<" "<<2<<" ";
			for(long long int i =4;i<a;){
				cout<<i<<" "<<i+3<<" ";
				i+=4;
			}
		}
		else if((a-4)%4==0){
			cout<<"YES"<<nl;
			cout<<a/2<<" "<<nl;
			cout<<"1 4 ";
			for(long long int i=5;i<a;){
				cout<<i<<" "<<i+3<<" ";
				i+=4;
			}
			cout<<nl;
			cout<<a/2<<nl;
			cout<<"2 3 ";
			for(long long int i =6;i<a;){
				cout<<i<<" "<<i+1<<" ";
				i+=4;
			}
		}
		else{
			cout<<"NO"<<nl;
		}
	}
}
 
int main() {
    int t =1;
	while(t--){
		solve();
	}
}

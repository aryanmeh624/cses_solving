#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	long long int answer = 1;
	for(int i =0;i<n;i++){
		answer = (answer*2)%1000000007;
	}
	cout<<answer<<"\n";

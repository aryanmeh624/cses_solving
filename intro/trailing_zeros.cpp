#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long int n;
	cin>>n;
	long long int scurr = 5;
	long long int answer =0;
	while(1){
		answer+=n/scurr;
		if(n/scurr==0) break;
		scurr = scurr*5;
	}
	cout<<answer;
}

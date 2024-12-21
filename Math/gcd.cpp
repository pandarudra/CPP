#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll a,ll b){
	if(b==0LL)return a;
	return gcd(b,a%b);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cout<<gcd(2,7);
	return 0;
}
		
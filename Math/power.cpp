#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

double Pow(double x,ll n){
	if(n==0){
		return 1;
	}
	ll res=Pow(x,n/2);
	if(n&1){
		return (n<0)?res*res/x:res*res*x;
	}
	return res*res;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout<<Pow(4.0,-1);
	return 0;
}
		
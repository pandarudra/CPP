#include<bits/stdc++.h>
using namespace std;

constexpr int _inf = INT_MIN ;
constexpr int  inf = INT_MAX ;
constexpr ll _linf = LLONG_MIN ;
constexpr ll  linf = LLONG_MAX	;

#define umap unordered_map 
#define uset unordered_set 
#define all(v) (v).begin(),(v).end()
#define print_vector(v) for(auto &it : v)cout << it << " " ;
#define newLine cout<<"\n"


typedef long long ll;

// Unique hash  for umap and uset
struct pair_hash{
    template< class T1 , class T2 >
    size_t operator()(const pair<T1,T2>& p)const {
        auto hash1 = hash<T1>{}(p.first) ;
        auto hash2 = hash<T2>{}(p.second) ;
        return hash1 ^ hash2 ;
    }
};


//-----------------------------------------------

// rudra _ 826

void solve(){
	ll _ ;
	cin >> _ ;
	cin.ignore() ;
	while(_--){

	}
}

//-------------------------------------------------------

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve() ;
	return 0;
}		
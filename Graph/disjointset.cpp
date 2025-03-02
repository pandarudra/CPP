#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define print(x) cout << x 

class DisjointSet {
	vector<int> rank , parent ;
public:
	DisjointSet(int n){
		rank.resize(n + 1 , 0) ;
		parent.resize(n + 1) ;

		for(int i = 0 ; i <= n ; i++){
			parent[i] = i ;
		}
	}

	int findUPar(int n){
		if(parent[n] == n){
			return n ;
		}
		return parent[n] = findUPar(parent[n]) ;
	}

	 void unionByRank(int u, int v) {
        int pu = findUPar(u);
        int pv = findUPar(v);

        if (pu == pv) return; 

        if (rank[pu] < rank[pv]) {
            parent[pu] = pv;
        } else if (rank[pu] > rank[pv]) {
            parent[pv] = pu;
        } else {
            parent[pu] = pv;
            rank[pv]++;
        }
    }
};

void solve(){
	DisjointSet ds(7) ;
	ds.unionByRank(1 , 2) ;
	ds.unionByRank(2 , 3) ;
	ds.unionByRank(4 , 5) ;
	ds.unionByRank(6 , 7) ;
	ds.unionByRank(5 , 6) ;
	ds.unionByRank(3 , 7) ;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}
        
		
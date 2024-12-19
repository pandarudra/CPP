#include<bits/stdc++.h>
using namespace std;

#define _inf INT_MIN
#define  inf INT_MAX
#define _linf LLONG_MIN
#define  linf LLONG_MAX		

typedef long long ll;

struct tree
{
    ll root;
    tree*left;
    tree*right;
    tree(tree* _left=nullptr,ll _root=0,tree* _right=nullptr){
        root=_root;
        left=_left;
        right=_right;
    }
};


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	return 0;
}		
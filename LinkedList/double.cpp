#include<bits/stdc++.h>
using namespace std;

#define _inf INT_MIN
#define  inf INT_MAX
#define _linf LLONG_MIN
#define  linf LLONG_MAX		

typedef long long ll;

struct DLL{
    ll data;
    Node* next;
    Node* prev;
    Node():data(0),next(nullptr),prev(nullptr){}
    Node(ll x):data(x),next(nullptr),prev(nullptr){}
    Node(ll x,Node* next):data(x),next(next),prev(nullptr){}
    Node(Node* prev,ll x):data(x),next(nullptr),prev(prev){}
    Node(Node*prev,ll x,Node* next):data(x),next(next),prev(prev){}
};

//DLL dummy(5) ----> NULL -> dummy --->NULL


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	return 0;
}		
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


struct trie{
	trie* links[26];
	bool end = false;

	bool contain(char ch){
		return links[ ch - 'a' ] != nullptr;
	}

	void put(char ch){
		links[ ch - 'a' ] = new trie();
	}

	trie* get(char ch){
		return links[ ch - 'a' ];
	}

};


void insert(string &word , trie* root){
	trie* node = root;
	for(ll i = 0LL ; i < word.length() ; i++){
		if(!node->contain(word[i])){
			node->put(word[i]);
		}
		node = node->get(word[i]);
	}
	node->end = true;
}

bool search(string &word , trie* root){
	trie* node = root;
	for(ll  i = 0LL ; i < word.length() ; i++){
		if(node->contain(word[i])){
			node = node->get(word[i]);
		}else{
			return false;
		}
	}
	return true;
}



void solve(){
    trie* root = new trie();
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
    return 0;
}
        
		
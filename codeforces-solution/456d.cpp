#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
 
#define ll long long int
 
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define _cin ios_base::sync_with_stdio(0);  cin.tie(0);
#define all(x) (x).begin(), (x).end()
 
#define INF 2147483647
#define MAXN 300004
 
ll mod = 1000000007;

typedef struct TrieNode{
	TrieNode* child[26];
	bool w, l;
}TrieNode;

TrieNode* getNode()
{
	TrieNode* node = (TrieNode*)malloc(sizeof(TrieNode));
	node -> w = node -> l = false;
	for(int i=0; i<26; i++){
		node -> child[i] = NULL;
	}
	return node;
}

TrieNode* insert(TrieNode* root, string str)
{
	TrieNode* curr = root;
	int len = str.length();
	for(int i=0; i<len; i++){
		if(curr -> child[str[i] - 'a'])
			curr = curr -> child[str[i] - 'a'];
		else{
			curr -> child[str[i] - 'a'] = getNode();
			curr = curr -> child[str[i] - 'a'];
		}
	}
}

void dfs(TrieNode* node)
{
	int fl = 1;
	node -> w = node -> l = false;
	for(int i=0; i<26; i++){
		if(node -> child[i]){
			fl = 0;
			dfs(node -> child[i]);
			node -> w = node -> w || !(node -> child[i] -> w);
			node -> l = node -> l || !(node -> child[i] -> l);
		}
	}
	if(fl == 1){
		node -> l = true;
	}
}

int main()
{
	_cin;
	TrieNode* root = getNode();
	int n,k;
	cin >> n >> k;
	for(int i=0; i<n; i++){
		string str;
		cin >> str;
		insert(root, str);
	}
	dfs(root);
	if(k == 1){
		if(root -> w)
			printf("First\n");
		else
			printf("Second\n");
	}
	else if(!(root -> w)){
		printf("Second\n");
	}
	else if(root -> l){
		printf("First\n");
	}
	else if(k % 2 == 1){
		printf("First\n");
	}
	else{
		printf("Second\n");
	}
	return 0;
}

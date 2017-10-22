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
#define MAXN 200004

ll mod = 1000000007;

typedef struct TrieNode
{
	struct TrieNode* child[2];
	struct TrieNode* parent;
	bool isLeaf;
	int count;
}TrieNode;

TrieNode* getNode()
{
	TrieNode* node = (TrieNode*)malloc(sizeof(TrieNode));
	node -> isLeaf = false;
	node -> parent = NULL;
	node -> count = 0;
	node -> child[0] = node -> child[1] = NULL;
	return node;
}

void insert(TrieNode* root, string str)
{
	int len = str.length();
	TrieNode *curr = root, *prev;
	for(int i=0; i<len; i++){
		if(curr -> child[str[i]-'0']){
			curr = curr -> child[str[i]-'0'];
		}
		else{
			curr -> child[str[i]-'0'] = getNode();
			prev = curr;
			curr = curr -> child[str[i]-'0'];
			curr -> parent = prev;
		}
	}
	curr -> isLeaf = true;
	curr -> count += 1;
}

void remove(TrieNode* root, string str)
{
	int len = str.length();
	TrieNode* curr = root, *next;
	for(int i=0; i<len; i++){
		curr = curr -> child[str[i]-'0'];
	}
	if(curr -> count > 1){
		curr -> count -= 1;
	}
	else{
		while(true){
			next = curr -> parent;
			if(curr == NULL || next == NULL){
				break;
			}
			if(next -> child[0] && next -> child[1]){
				if(next -> child[0] == curr){
					next -> child[0] = NULL;
				}
				else{
					next -> child[1] = NULL;
				}
				free(curr);
				curr = next;
				break;
			}
			else if(next -> child[0]){
				next -> child[0] = NULL;
				free(curr);
				curr = next;
			}
			else if(next -> child[1]){
				next -> child[1] = NULL;
				free(curr);
				curr = next;
			}
		}
	}
}

string convertToBin(int x)
{
	string str = "";
	while(x > 0){
		if(x % 2 == 0)
			str += "0";
		else
			str += "1";	
		x = x/2;
	}
	reverse(str.begin(), str.end());
	int len = str.length()-1;
	for(int i=len; i<31; i++){
		str = "0"+str;
	}
	return str;
}

int convertToDec(string str)
{
	int len = str.length(), exp = 0, term, x = 0;
	for(int i=len-1; i>=0; i--){
		term = pow(2,exp);
		x = x + term*(str[i]-'0');
		exp++;
	}
	return x;
}

string find(TrieNode* root, string str)
{
	TrieNode* curr = root;
	string ans = "";
	int ch, len = str.length();
	for(int i=0; i<len; i++){
		ch = str[i]-'0';
		if(ch == 0){
			if(curr -> child[1]){
				ans += "1";
				curr = curr -> child[1];
			}
			else{
				ans += "0";
				curr = curr -> child[0];
			}
		}
		else{
			if(curr -> child[0]){
				ans += "0";
				curr = curr -> child[0];
			}
			else{
				ans += "1";
				curr = curr -> child[1];
			}
		}
	}
	return ans;
}

int main()
{
	TrieNode* root = getNode();
	char type;
	int q,x,res;
	string bin, query;
	scanf("%d",&q);
	bin = convertToBin(0);
	insert(root, bin);
	while(q--){
		scanf(" %c %d",&type,&x);
		bin = convertToBin(x);
		if(type == '+'){
			insert(root, bin);
		}
		else if(type == '-'){
			remove(root, bin);	
		}
		else{
			query = find(root, bin);	
			res = convertToDec(query);
			printf("%d\n", x^res);
		}
	}
	return 0;
}

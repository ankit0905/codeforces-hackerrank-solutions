#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <set>
#include <map>

using namespace std;

#define ll long long

#define pii pair<ll,ll>
#define pll pai<ll,ll>
#define mp make_pair

vector<string> v(504);
pair<ll, ll> p[504];
ll count1[504],n,m,fi,temp;

ll solve(ll fl, ll row)
{
	//cout << fl << " " << row << endl;
	ll tp1,tp2;
	if(row <= fi){
		if(fl == 0){
			tp1 = 1+p[row].second;
			//cout << fl << " " << row << " " << tp1 << endl;
			return tp1;
		}
		else{
			tp1 = 1+m+1-p[row].first;
			//cout << fl << " " << row << " " << tp1 << endl;
			return tp1;
		}
	}
	else{
		if(fl == 0){
			if(count1[row] == 0){
				tp1 = solve(0,row-1);
				tp2 = m+1+solve(1,row-1);
				//cout << fl << " " << row << " " << tp1 << " " << tp2 << endl;
				return 1+min(tp1,tp2);
			}
			else{
				temp = p[row].second;
				tp1 = 2*temp+solve(0,row-1);
				tp2 = m+1+solve(1,row-1);
				//cout << fl << " " << row << " " << tp1 << " " << tp2 << endl;
				return 1+min(tp1,tp2);
			}
		}
		else{
			if(count1[row] == 0){
				tp1 = solve(1,row-1);
				tp2 = m+1+solve(0,row-1);
				//cout << fl << " " << row << " " << tp1 << " " << tp2 << endl;
				return 1+min(tp1,tp2);
			}
			else{
				temp = m+1-p[row].first;
				tp1 = 2*temp+solve(1,row-1);
				tp2 = m+1+solve(0,row-1);
				//cout << fl << " " << row << " " << tp1 << " " << tp2 << endl;
				return 1+min(tp1,tp2);
			}
		}
	}
}

int main()
{
	cin >> n >> m;
	for(ll i=0; i<n; i++){
		cin >> v[i];
		count1[i] = 0;
	}
	for(ll i=0; i<n; i++){
		ll ct = 0, st = -1, en = -1;
		for(ll j=0; j<m+2; j++){
			if(v[i][j] == '1'){
				ct++;
				if(st == -1){
					st = j;
				}
				en = j;
			}
		}
		p[i] = make_pair(st,en);
		//cout << i << " " << st << " " << en << endl;
		count1[i] = ct;
		//cout << i << " " << count1[i] << endl;
	}
	fi = -1;
	for(ll i=0; i<n; i++){
		if(count1[i] > 0){
			fi = i;
			break;
		}
	}
	if(fi == -1){
		cout << 0 << endl;
		return 0;
	}
	else if(fi == n-1){
		cout << p[fi].second << endl;
		return 0;
	}
	//cout << "fi = " << fi << endl;
	ll r = n-1, c = 0, ans = 0, tot;
	if(count1[r] == 0){
		ll tp1, tp2;
		tp1 = solve(0,n-2);
		tp2 = m+1+solve(1,n-2);
		ans = min(tp1,tp2);
		//cout << "start - " << tp1 << " " << tp2 << endl;
	}
	else{
		c = p[r].second;
		ll tp1, tp2;
		tp1 = 2*c+solve(0,n-2);
		tp2 = m+1+solve(1,n-2);
		ans = min(tp1,tp2);
		//cout << "start - " << tp1 << " " << tp2 << endl;
	}
	cout << ans << endl;
	return 0;
}

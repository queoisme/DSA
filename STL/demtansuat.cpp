#include <bits/stdc++.h>
#define el cout << '\n'
#define L(i, a, b) for (int i = (a); i <= (b); i++)
#define R(i, a, b) for (int i = (a); i >= (b); i--)
#define gg(...) [](const auto&...x){ char c='='; cerr<<#__VA_ARGS__<<" ";((cerr<<exchange(c,',')<<" "<<x),...); cerr<<endl; }(__VA_ARGS__);
#define N (int)
using namespace std;
string s;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    cin >> s;
    map<char, int> mp;
    L(i, 0, (int)s.size() - 1) mp[s[i]]++;
	for(auto x : mp) cout << x.first << " " << x.second << endl;
}
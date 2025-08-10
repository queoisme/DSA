#include <bits/stdc++.h>
#define el cout << '\n'
#define L(i, a, b) for (int i = (a); i <= (b); i++)
#define R(i, a, b) for (int i = (a); i >= (b); i--)
#define gg(...) [](const auto&...x){ char c='='; cerr<<#__VA_ARGS__<<" ";((cerr<<exchange(c,',')<<" "<<x),...); cerr<<endl; }(__VA_ARGS__);
#define N (int)
using namespace std;
string s; int n;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    cin >> n;
    map<int, int> mp;
    while(n--){
    	cin >> s;
    	if(s == "add"){
    		int x; cin >> x;
    		mp[x]++;
    	}
    	else if(s == "del"){
    		int x; cin >> x;
    		if(mp.count(x)){
    			mp[x]--;
                if(mp[x] <= 0) mp.erase(x);
    		}
    	}
    	else if(s == "count"){
    		int x; cin >> x;
    		if(mp.count(x)) cout << mp[x] << endl;
            else cout << 0 << endl;
    	}
    	else{
    		cout << mp.size() << endl;
    	}
    }
}
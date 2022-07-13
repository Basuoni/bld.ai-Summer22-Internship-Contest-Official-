#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <set>
#define Fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define forn(i, st, n) for (int i = st; i < n; i++)
#define ll long long
#define endl "\n"
#define endCase return
using namespace std;
const int N = 1e3 + 5, Mod = 1e9 + 7;
vector<ll> searched(ll x, ll root, ll h) {
	vector<ll> res;
	h -= 2;
	ll mid = root;
	ll temp = 1ll << h;
	while (mid != x) {
		res.push_back(mid);
		if (x < mid)
			mid = mid - temp;
		else
			mid = mid + temp;
		h--;
		temp = 1ll << h;
	}
	res.push_back(mid);
	return res;
}
void testCase() {
	ll h, a, b;
	cin >> h >> a>>b;
	ll root = 1ll << (h - 1);
	//cout << root << endl;
	vector<ll> ans1 = searched(a, root, h);
	vector<ll> ans2 = searched(b, root, h);
	int mi = min(ans1.size(), ans2.size());
	ll ans = 0;
	forn(i, 0, mi) {
		if (ans1[i] != ans2[i]) break;
		ans = ans1[i];
	}
	cout << ans << endl;
}
int main() {
	Fast;
	int t = 1;
	cin >> t;
	while (t--) testCase();
}
/*
4
1 1 1 1
0 0 0 0
0 1 0 0
1 0 0 0

001100010

*/

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
void testCase() {
	string s, y;
	cin >> s >> y;
	int i = 0;
	int j = 0;
	while (i < s.size() && j < y.size())
	{
		cout << s[i] << y[j];
		i++, j++;
	}
	while (i < s.size())
	{
		cout << s[i];
		i++;
	}
	while (j < y.size())
	{
		cout << y[j];
		j++;
	}
}

int main() {
	Fast;
	int t = 1;
	// cin>>t;
	while (t--)testCase();
}

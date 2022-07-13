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
    int f, s;
    cin >> f >> s;
    vector<int>vec;

    for (int i = 0; i < f; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    int maxy = -1;
    if (s == 0)
        cout << vec[0] << endl;
    else if (s == 1)
        cout << vec[1] << endl;
    else
    {
        int miny = min(s + 1, f);
        for (int i = 0; i < miny; i++)
        {
            if (i == s - 1)
                continue;
            maxy = max(maxy, vec[i]);
        }
        cout << maxy << endl;
    }
}

int main() {
	Fast;
	int t = 1;
	// cin>>t;
	while (t--)testCase();
}
/*
4
1 1 1 1
0 0 0 0
0 1 0 0
1 0 0 0

*/

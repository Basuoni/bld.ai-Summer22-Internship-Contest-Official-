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
    int k;
    cin >> k;
    vector<int>vec(k);
    vector<int>out(k);
    map<int, int>mpp;
    for (int i = 0; i < k; i++)
    {
        cin >> vec[i];
    }
    reverse(vec.begin(), vec.end());
    int mn = 1e9 + 5;
    mpp[vec[0]]++;
    out[0] = 1;
    mn = vec[0];
    for (int i = 1; i < k; i++)
    {
        mpp[vec[i]]++;
        mn = min(mn, vec[i]);
        out[i] = mpp[mn];
    }
    reverse(out.begin(), out.end());

    for (int i = 0; i < k; i++)
        cout << out[i] << " ";
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

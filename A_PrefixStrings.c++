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
class trie_node {
public:
    int in;
    trie_node* ptr[26];
    bool isLeaf;
    trie_node() {
        in = 0;
        isLeaf = false;
        for (int i = 0; i < 26; i++)
            ptr[i] = 0;

    }
};

trie_node* root;

void add(string s) { // insert string to the trie o(length of s)
    trie_node* tmp = root;
    int i;
    for (i = 0; i < s.size(); i++) {
        if (tmp->ptr[s[i] - 'a'] == 0)
            tmp->ptr[s[i] - 'a'] = new trie_node();
        tmp = tmp->ptr[s[i] - 'a'];
        tmp->in++;
    }
    tmp->isLeaf = true;
}
int search(string s) { // insert string to the trie o(length of s)
    trie_node* tmp = root;
    int i;
    for (i = 0; i < s.size(); i++) {
        if (tmp->ptr[s[i] - 'a'] == 0)
            return 0;
        tmp = tmp->ptr[s[i] - 'a'];
    }
    return tmp->in;
}

void testCase() {
    root = new trie_node();
    int n, m;
    cin >> n >> m;
    forn(i, 0, n) {
        string  it;
        cin >> it;
        add(it);
    }
    forn(i, 0, m) {
        string  it;
        cin >> it;
        cout << search(it) << endl;
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

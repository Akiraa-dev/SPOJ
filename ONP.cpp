/**
 *    author:  akira
 *    created: 24/05/2023 15:37:11
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

const ldb PI = 3.1415926535897932384626433832795;
const ll INF = 1000000000000000000;
const ll MOD = 1000000007;
const ll MOD2 = 1000000009;
const ldb EPS = 1e-6;

void solve() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        string ans;
        stack<char> x;
        for(int i = 0; s[i] != '\0'; i++) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                ans += s[i];
            }
            else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^' || s[i] == '%') {
                x.push(s[i]);
            }
            else if(s[i] == '(') continue;
            else if(s[i] == ')') {
                ans += x.top();
                x.pop();
            }
        }
        cout << ans << endl;
    }
}

int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("ONP.INP", "r", stdin);
    // freopen("ONP.OUT", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}

/**
  *    {\__/}
  *    (• .•)
  *    / >♥️
**/